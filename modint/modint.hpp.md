---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"modint/modint.hpp\"\ntemplate<long long mod>\r\nstruct modint{\r\
    \n    long long num;\r\n\r\n    constexpr modint(long long x = 0) : num((x + mod)\
    \ % mod) {}\r\n\r\n    constexpr modint &operator += (const modint& rhs){\r\n\
    \        num = (num + rhs.num) % mod;\r\n        return *this;\r\n    }\r\n  \
    \  constexpr modint &operator -= (const modint& rhs){\r\n        num  -= rhs.num;\r\
    \n        while(num < 0) num += mod;\r\n        num %= mod;\r\n        return\
    \ *this;\r\n    }\r\n    constexpr modint &operator *= (const modint& rhs){\r\n\
    \        num = num * rhs.num % mod;\r\n        return *this;\r\n    }\r\n    constexpr\
    \ modint &operator /= (modint rhs){\r\n        int exp = mod - 2;\r\n        while(exp\
    \ > 0){\r\n            if(exp % 2){\r\n                *this *= rhs;\r\n     \
    \       }\r\n            rhs *= rhs;\r\n            exp /= 2;\r\n        }\r\n\
    \        return *this;\r\n    }\r\n\r\n    constexpr modint operator ++ (){\r\n\
    \        num = (num + 1) % mod;\r\n        return *this;\r\n    }\r\n    constexpr\
    \ modint operator ++ (int n){\r\n        (void)n;\r\n        modint tmp = *this;\r\
    \n        ++(*this);\r\n        return tmp;\r\n    }\r\n    constexpr modint operator\
    \ -- (){\r\n        num = (num + mod - 1) % mod;\r\n        return *this;\r\n\
    \    }\r\n    constexpr modint operator -- (int n){\r\n        (void)n;\r\n  \
    \      const modint tmp = *this;\r\n        --(*this);\r\n        return tmp;\r\
    \n    }\r\n\r\n    void modpow(ll y){\r\n        modint tmp = (*this);\r\n   \
    \     (*this) = 1;\r\n        while(y > 0){\r\n            if(y % 2){\r\n    \
    \            (*this) *= tmp;\r\n            }\r\n            tmp *= tmp;\r\n \
    \           y /= 2;\r\n        }\r\n    }\r\n\r\n    constexpr modint operator\
    \ + (const modint& rhs) const {\r\n        return modint(*this) += rhs;\r\n  \
    \  }\r\n    constexpr modint operator - (const modint& rhs) const {\r\n      \
    \  return modint(*this) -= rhs;\r\n    }\r\n    constexpr modint operator * (const\
    \ modint& rhs) const {\r\n        return modint(*this) *= rhs;\r\n    }\r\n  \
    \  constexpr modint operator / (const modint& rhs) const {\r\n        return modint(*this)\
    \ /= rhs;\r\n    }\r\n\r\n    \r\n    friend ostream &operator << (ostream& lhs,\
    \ const modint& rhs){\r\n        return lhs << rhs.num;\r\n    }\r\n\r\n    friend\
    \ istream &operator >> (istream& lhs, modint& rhs){\r\n        lhs >> rhs.num;\r\
    \n        return lhs;\r\n    }\r\n};\r\n\r\nmint modpow(mint x, ll y){\r\n   \
    \ if(y == 0) return 1;\r\n    mint e = modpow(x, y / 2);\r\n    e = e * e;\r\n\
    \    return e * (y % 2 == 0 ? 1 : x);\r\n}\n"
  code: "template<long long mod>\r\nstruct modint{\r\n    long long num;\r\n\r\n \
    \   constexpr modint(long long x = 0) : num((x + mod) % mod) {}\r\n\r\n    constexpr\
    \ modint &operator += (const modint& rhs){\r\n        num = (num + rhs.num) %\
    \ mod;\r\n        return *this;\r\n    }\r\n    constexpr modint &operator -=\
    \ (const modint& rhs){\r\n        num  -= rhs.num;\r\n        while(num < 0) num\
    \ += mod;\r\n        num %= mod;\r\n        return *this;\r\n    }\r\n    constexpr\
    \ modint &operator *= (const modint& rhs){\r\n        num = num * rhs.num % mod;\r\
    \n        return *this;\r\n    }\r\n    constexpr modint &operator /= (modint\
    \ rhs){\r\n        int exp = mod - 2;\r\n        while(exp > 0){\r\n         \
    \   if(exp % 2){\r\n                *this *= rhs;\r\n            }\r\n       \
    \     rhs *= rhs;\r\n            exp /= 2;\r\n        }\r\n        return *this;\r\
    \n    }\r\n\r\n    constexpr modint operator ++ (){\r\n        num = (num + 1)\
    \ % mod;\r\n        return *this;\r\n    }\r\n    constexpr modint operator ++\
    \ (int n){\r\n        (void)n;\r\n        modint tmp = *this;\r\n        ++(*this);\r\
    \n        return tmp;\r\n    }\r\n    constexpr modint operator -- (){\r\n   \
    \     num = (num + mod - 1) % mod;\r\n        return *this;\r\n    }\r\n    constexpr\
    \ modint operator -- (int n){\r\n        (void)n;\r\n        const modint tmp\
    \ = *this;\r\n        --(*this);\r\n        return tmp;\r\n    }\r\n\r\n    void\
    \ modpow(ll y){\r\n        modint tmp = (*this);\r\n        (*this) = 1;\r\n \
    \       while(y > 0){\r\n            if(y % 2){\r\n                (*this) *=\
    \ tmp;\r\n            }\r\n            tmp *= tmp;\r\n            y /= 2;\r\n\
    \        }\r\n    }\r\n\r\n    constexpr modint operator + (const modint& rhs)\
    \ const {\r\n        return modint(*this) += rhs;\r\n    }\r\n    constexpr modint\
    \ operator - (const modint& rhs) const {\r\n        return modint(*this) -= rhs;\r\
    \n    }\r\n    constexpr modint operator * (const modint& rhs) const {\r\n   \
    \     return modint(*this) *= rhs;\r\n    }\r\n    constexpr modint operator /\
    \ (const modint& rhs) const {\r\n        return modint(*this) /= rhs;\r\n    }\r\
    \n\r\n    \r\n    friend ostream &operator << (ostream& lhs, const modint& rhs){\r\
    \n        return lhs << rhs.num;\r\n    }\r\n\r\n    friend istream &operator\
    \ >> (istream& lhs, modint& rhs){\r\n        lhs >> rhs.num;\r\n        return\
    \ lhs;\r\n    }\r\n};\r\n\r\nmint modpow(mint x, ll y){\r\n    if(y == 0) return\
    \ 1;\r\n    mint e = modpow(x, y / 2);\r\n    e = e * e;\r\n    return e * (y\
    \ % 2 == 0 ? 1 : x);\r\n}"
  dependsOn: []
  isVerificationFile: false
  path: modint/modint.hpp
  requiredBy: []
  timestamp: '2023-03-04 10:46:21+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: modint/modint.hpp
layout: document
redirect_from:
- /library/modint/modint.hpp
- /library/modint/modint.hpp.html
title: modint/modint.hpp
---
