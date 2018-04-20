#include <iostream>
class int_t {
  friend std::ostream &operator<<(std::ostream &os, const int_t i);

public:
  int_t(int i) : data(i) {}

  // increment and then fetch
  int_t &operator++() {
    ++(this->data);
    return *this;
  }

  // fetch and then increment
  int_t &operator++(int) {
    int_t tmp = *this;
    ++(*this);
    return tmp;
  }

  int_t &operator--() {
    --(this->data);
    return *this;
  }

  int_t &operator--(int) {
    int_t tmp = *this;
    --(*this);
    return tmp;
  }

  int &operator*() const { return (int &)data; }

private:
  int data;
};

std::ostream &operator<<(std::ostream &os, int_t i) {
  os << '[' << i.data << "]\n";
  return os;
}

int main() {
  int_t a(5);
  std::cout << a++; // 5
  std::cout << ++a; // 7
  std::cout << a--; // 7
  std::cout << --a; // 5
  std::cout << *a;  // 5
  return 0;
}
