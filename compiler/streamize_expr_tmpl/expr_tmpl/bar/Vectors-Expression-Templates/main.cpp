#include <iostream>
 
#include "Vector.hpp"
 
using namespace std;
 
 
int main()
{
    // empty constuctor
    Vector a;
 
    // constructor with vector size
    Vector b(10);
 
    // constructor with vector size and initialization value
    Vector c(10,3.14);
 
    // copy constructor
    Vector d(c);
 
    // another constructor evaluates an expression
    Vector e = c + d;
 
    // subtraction of vector
    Vector f = c - d;
 
    // multiplication with scalar
    b = 0.5 * b;
 
    // division with scalar
    Vector g = d / 2.5;
 
    // vector expression evaluation
    b = 2.5 * (f - b) + d;
 
    // += operator
    c += 5 * e;
 
    // get dot product
    double x = c.dot( c - d);
 
    // print vector
    //cout << c << endl;
 
    return 0;
}
