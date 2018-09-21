#include <iostream>

struct Point {
  int x, y;

  Point(int x = 0, int y = 0) : x(x), y(y) {}

  template <typename LHS, typename RHS>
  Point(AddOp<LHS, RHS> const &op) {
    x = op.get_x();
    y = op.get_y();
  }

  template <typename LHS, typename RHS>
  Point &operator=(AddOp<LHS, RHS> const &op) {
    x = op.get_x();
    y = op.get_y();
    return *this;
  }

  int get_x() const { return x; }
  int get_y() const { return y; }
};

template <typename LHS, typename RHS>
struct AddOp {
  LHS const &lhs;
  RHS const &rhs;

  AddOp(LHS const &lhs, RHS const &rhs) : lhs(lhs), rhs(rhs) {
    // empty body
  }

  LHS const &get_lhs() const { return lhs; }
  RHS const &get_rhs() const { return rhs; }

  int get_x() const { return lhs.get_x() + rhs.get_x(); }
  int get_y() const { return lhs.get_y() + rhs.get_y(); }
};

int main() {
  return 0;
}
