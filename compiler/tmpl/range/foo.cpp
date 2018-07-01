#include "range.h"
#include <iostream>

using namespace std;
using namespace detail;

void foo() {
  cout << "Range(15):";
  for (int i : Range(15)) {
    cout << " " << i;
  }

  cout << endl;
  cout << "Range(2,6):";
  for (auto i : Range(2, 6)) {
    cout << " " << i;
  }
  cout << endl;

  cout << "Range(10.5, 15.5):";
  for (auto i : Range(10.5, 15.5)) {
    cout << " " << i;
  }
  cout << endl;

  cout << "Range(35,27,-1):";
  for (int i : Range(35, 27, -1)) {
    cout << " " << i;
  }
  cout << endl;

  cout << "Range(2,8,0.5):";
  for (auto i : Range(2, 8, 0.5)) {
    cout << " " << i;
  }
  cout << endl;

  cout << "Range(8,7,-0.1):";
  for (auto i : Range(8, 7, -0.1)) {
    cout << " " << i;
  }
  cout << endl;

  cout << "Range('a', 'z'):";
  for (auto i : Range('a', 'z')) {
    cout << " " << i;
  }
  cout << endl;
}

int main(void) {
  foo();

  return 0;
}
