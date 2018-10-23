# 1 "foo.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 352 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "foo.cpp" 2
class Base {
protected:
  int foo;
public:
  int method(int p) {
    return foo + p;
  }
};

struct Point {
  double cx, cy;
};

class Derived : public Base {
public:
  int method(int p) {
    return foo + bar + p;
  }
protected:
  int bar, baz;
  Point a_point;
  char c;
};

int main() {
  return sizeof(Derived);
}
