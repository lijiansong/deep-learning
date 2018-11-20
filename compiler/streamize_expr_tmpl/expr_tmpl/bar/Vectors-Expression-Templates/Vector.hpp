#ifndef VECTOR
#define VECTOR
 
#include <iostream>
#include <vector>
#include <cassert>
 
using namespace std;
 
/** @brief The base expression class */
template <class A>
class VecExpr{
public:
  typedef std::vector<double>                  container_type;
  typedef typename container_type::value_type  value_type;
  typedef typename container_type::reference   reference;
 
  size_t size() const  {return static_cast<A const&>(*this).size(); }
  value_type operator [] (const size_t& i) const {return static_cast<A const&> (*this)[i];}
  operator A&()             { return static_cast<      A&>(*this); }
  operator A const&() const { return static_cast<const A&>(*this); }
};
 
 
class Vector : public VecExpr<Vector> {
 
public:
 
    // constructors
    Vector () {}
    Vector (const size_t& n) :_data(n) {}
    Vector (const size_t& n, const double& value) :_data(n,value) {}
    template <class E>
    Vector (const VecExpr<E>& rhs) { *this = rhs;}
 
    reference  operator [] (const int& i)       { assert(i < (int)_data.size()); return _data[i];}
    value_type operator [] (const int& i) const { assert(i < (int)_data.size()); return _data[i];}
 
    size_t size() const { return _data.size(); }
 
    // the = operator
    template <class E>
    void operator = (const VecExpr<E>& rhs){
        if(_data.size() != rhs.size())
            _data.resize(rhs.size());
        for(size_t i = 0; i < rhs.size(); i++)
            _data[i] = rhs[i];
    }
 
    // the += operator
    template <class E>
    void operator += (const VecExpr<E>& rhs){
        if(_data.size() != rhs.size())
            _data.resize(rhs.size());
        for(size_t i = 0; i < rhs.size(); i++)
            _data[i] += rhs[i];
    }
 
    // the -= operator
    template <class E>
    void operator -= (const VecExpr<E>& rhs){
        if(_data.size() != rhs.size())
            _data.resize(rhs.size());
        for(size_t i = 0; i < rhs.size(); i++)
            _data[i] -= rhs[i];
    }
 
    template <class E>
    value_type dot (const VecExpr<E>& rhs){
        value_type result = 0;
        assert(_data.size() == rhs.size());
        for(size_t i = 0; i < rhs.size(); i++)
            result += _data[i] * rhs[i];
        return result;
    }
 
private:
    container_type  _data;
};
 
 
/** @brief class for summation of vectors  */
template <class A, class B>
class VecSum : public VecExpr<VecSum<A,B> >{
private:
  A _u;
  B _v;
public:
  typedef typename VecExpr<VecSum<A,B>>::value_type value_type;
  VecSum(const VecExpr<A>& a, const VecExpr<B>& b): _u(a), _v(b) {}
  value_type operator [] (const size_t& i) const { assert(_u.size() == _v.size()); return (_u[i] + _v[i]); }
  size_t size() const { return _u.size(); }
};
 
/** @brief wrapper function of ExprSum class */
template <class A, class B>
inline VecSum <A,B> const operator + (VecExpr<A> const& u, VecExpr<B> const& v){
  return VecSum <A,B> (u,v);
}
 
 
 
/** @brief class for subtraction of two vectors */
template <class A, class B>
class VecSubtract : public VecExpr<VecSubtract<A,B> >{
private:
    A _u;
    B _v;
public:
    typedef typename VecExpr<VecSubtract<A,B>>::value_type value_type;
    VecSubtract(const VecExpr<A>& a, const VecExpr<B>& b) :_u(a), _v(b) {}
    value_type operator [] (const size_t& i) const { assert(_u.size() == _v.size()); return (_u[i] - _v[i]); }
    size_t size() const {return _u.size(); }
};
 
/** @brief wrapper function for ExprSubtract class */
template <class A, class B>
inline VecSubtract<A,B> const operator - (VecExpr<A> const& u, VecExpr<B> const &v){
    return VecSubtract<A,B> (u,v);
}
 
/** @brief class for multiplying a vector by scalar */
template <class A>
class VecScale : public VecExpr<VecScale<A> >{
private:
    double alpha;
    A _u;
public:
    typedef typename VecExpr<VecScale<A>>::value_type value_type;
    VecScale(const double& a, const VecExpr<A>& u) :alpha(a), _u(u) {}
    value_type operator [] (const size_t& i) const { return (alpha * _u[i]); }
    size_t size() const {return _u.size(); }
};
 
 
/** @brief wrapper class for ExprScale */
template <class A>
inline VecScale<A> const operator * (const double& alpha, const VecExpr<A>& u){
    return VecScale<A> (alpha,u);
}
template <class A>
inline VecScale<A> const operator * (const VecExpr<A>& u, const double& alpha){
    return VecScale<A> (alpha,u);
}
 
/** @brief class for dividing a vector by scalar */
template <class A>
class VecDivide : public VecExpr<VecDivide<A> >{
private:
    double alpha;
    A _u;
public:
    typedef typename VecExpr<VecDivide<A>>::value_type value_type;
    VecDivide(const double& a, const VecExpr<A>& u) :alpha(a), _u(u) {}
    value_type operator [] (const size_t& i) const { return (_u[i] / alpha); }
    size_t size() const {return _u.size(); }
};
 
/** @brief wrapper class for ExprDivide */
template <class A>
inline VecDivide<A> const operator / (const VecExpr<A>& u, const double& alpha){
    return VecDivide<A> (alpha,u);
}
 
 
/** @brief class for returning negative value from a vector */
template <class A>
class VecNegative : public VecExpr<VecNegative<A>>{
private:
    A _u;
public:
    typedef typename VecExpr<VecNegative<A>>::value_type value_type;
    VecNegative(const VecExpr<A>& u) :_u(u) {}
    value_type operator [] (const size_t& i) const { return (-_u[i]); }
    size_t size() const {return _u.size(); }
};
 
/** @brief wrapper class for ExprNegative */
template <class A>
inline VecNegative<A> const operator - (const VecExpr<A>& u){
    return VecNegative<A> (u);
}
 
 
 
#endif // VECTOR
