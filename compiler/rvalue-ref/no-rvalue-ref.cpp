// REF: https://github.com/qicosmos/cosmos
// Rvalue reference
// Impl constructor and operator = with `move constructor and move assignment
// function`

#include <iostream>
#include <vector>

#define LOG()                                                                  \
  {                                                                            \
    std::cout << __PRETTY_FUNCTION__ << "in file " << __FILE__ << ":"          \
              << __LINE__ << std::endl;                                        \
  }

class MyString {
private:
  char *m_data;
  size_t m_len;

  void copy_data(const char *s) {
    m_data = new char[m_len + 1];
    memcpy(m_data, s, m_len);
    m_data[m_len] = '\0';
  }

public:
  MyString() {
    m_data = NULL;
    m_len = 0;
  }

  MyString(const char *p) {
    m_len = strlen(p);
    copy_data(p);
    std::cout << "---- MyString(const char *p):\n";
    std::cout << "source: " << this->m_data << std::endl;
  }

  void show() {
    std::cout << this->m_data << std::endl;
  }

  MyString(const MyString &str) {
    m_len = str.m_len;
    copy_data(str.m_data);
    std::cout << "MyString(const MyString &str):\n";
    std::cout << "Copy Constructor is called! source:" << str.m_data
              << std::endl;
  }

  MyString &operator=(const MyString &str) {
    if (this != &str) {
      m_len = str.m_len;
      copy_data(str.m_data);
    }
    std::cout << "MyString &operator=(const MyString &str)\n";
    std::cout << "Copy Assignment is called! source:" << str.m_data
              << std::endl;
    return *this;
  }

  virtual ~MyString() {
    if (m_data != NULL) {
      delete[] m_data;
    }
  }
};

MyString load(const char*p) {
  MyString tmp = MyString(p);
  return tmp;
}

int main(void) {
  const char *p = "hello";
  MyString foo = load(p);
  foo.show();
  MyString foo1 = foo;

  //MyString a;
  //a = MyString("Hello");

  //std::vector<MyString> vec;
  //vec.push_back(MyString("World"));

  return 0;
}
