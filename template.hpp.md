---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/aoj/ntl-1-b.test.cpp
    title: verify/aoj/ntl-1-b.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template.hpp\"\n#include<bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#define ll long long\r\n#define ull unsigned long long\r\n#define db\
    \ double\r\n#define pii pair<int,int>\r\n#define pli pair<ll,int>\r\n#define pil\
    \ pair<int,ll>\r\n#define pll pair<ll,ll>\r\n#define ti3 tuple<int,int,int>\r\n\
    #define int128 __int128_t\r\n#define pii128 pair<int128,int128>\r\nconst int inf\
    \ = 1 << 30;\r\nconst ll linf = 1e18;\r\nconst ll mod = 1e9 + 7;\r\nconst db EPS\
    \ = 1e-10;\r\nconst db pi = acos(-1);\r\ntemplate<class T> bool chmin(T& x, T\
    \ y){\r\n    if(x > y) {\r\n        x = y;\r\n        return true;\r\n    } else\
    \ return false;\r\n}\r\ntemplate<class T> bool chmax(T& x, T y){\r\n    if(x <\
    \ y) {\r\n        x = y;\r\n        return true;\r\n    } else return false;\r\
    \n}\r\n \r\n// overload macro\r\n#define CAT( A, B ) A ## B\r\n#define SELECT(\
    \ NAME, NUM ) CAT( NAME, NUM )\r\n \r\n#define GET_COUNT( _1, _2, _3, _4, _5,\
    \ _6 /* ad nauseam */, COUNT, ... ) COUNT\r\n#define VA_SIZE( ... ) GET_COUNT(\
    \ __VA_ARGS__, 6, 5, 4, 3, 2, 1 )\r\n \r\n#define VA_SELECT( NAME, ... ) SELECT(\
    \ NAME, VA_SIZE(__VA_ARGS__) )(__VA_ARGS__)\r\n \r\n// rep(overload)\r\n#define\
    \ rep( ... ) VA_SELECT(rep, __VA_ARGS__)\r\n#define rep2(i, n) for (int i = 0;\
    \ i < (int)n; i++)\r\n#define rep3(i, a, b) for (int i = a; i < (int)b; i++)\r\
    \n#define rep4(i, a, b, c) for (int i = a; i < (int)b; i += c)\r\n \r\n// repll(overload)\r\
    \n#define repll( ... ) VA_SELECT(rep, __VA_ARGS__)\r\n#define repll2(i, n) for\
    \ (ll i = 0; i < (ll)n; i++)\r\n#define repll3(i, a, b) for (ll i = a; i < (ll)b;\
    \ i++)\r\n#define repll4(i, a, b, c) for (ll i = a; i < (ll)b; i += c)\r\n \r\n\
    // rrep(overload)\r\n#define rrep( ... ) VA_SELECT(rrep, __VA_ARGS__)\r\n#define\
    \ rrep2(i, n) for (int i = n - 1; i >= 0; i--)\r\n#define rrep3(i, a, b) for (int\
    \ i = b - 1; i >= a; i--)\r\n#define rrep4(i, a, b, c) for (int i = b - 1; i >=\
    \ a; i -= c)\r\n \r\n// rrepll(overload)\r\n#define rrepll( ... ) VA_SELECT(rrep,\
    \ __VA_ARGS__)\r\n#define rrepll2(i, n) for (ll i = n - 1; i >= 0ll; i--)\r\n\
    #define rrepll3(i, a, b) for (ll i = b - 1; i >= (ll)a; i--)\r\n#define rrepll4(i,\
    \ a, b, c) for (ll i = b - 1; i >= (ll)a; i -= c)\r\n \r\n// for_earh\r\n#define\
    \ fore(e, v) for (auto&& e : v)\r\n \r\n// vector\r\n#define all(v) v.begin(),\
    \ v.end()\r\n#define rall(v) v.rbegin(), v.rend()\n"
  code: "#include<bits/stdc++.h>\r\nusing namespace std;\r\n#define ll long long\r\
    \n#define ull unsigned long long\r\n#define db double\r\n#define pii pair<int,int>\r\
    \n#define pli pair<ll,int>\r\n#define pil pair<int,ll>\r\n#define pll pair<ll,ll>\r\
    \n#define ti3 tuple<int,int,int>\r\n#define int128 __int128_t\r\n#define pii128\
    \ pair<int128,int128>\r\nconst int inf = 1 << 30;\r\nconst ll linf = 1e18;\r\n\
    const ll mod = 1e9 + 7;\r\nconst db EPS = 1e-10;\r\nconst db pi = acos(-1);\r\n\
    template<class T> bool chmin(T& x, T y){\r\n    if(x > y) {\r\n        x = y;\r\
    \n        return true;\r\n    } else return false;\r\n}\r\ntemplate<class T> bool\
    \ chmax(T& x, T y){\r\n    if(x < y) {\r\n        x = y;\r\n        return true;\r\
    \n    } else return false;\r\n}\r\n \r\n// overload macro\r\n#define CAT( A, B\
    \ ) A ## B\r\n#define SELECT( NAME, NUM ) CAT( NAME, NUM )\r\n \r\n#define GET_COUNT(\
    \ _1, _2, _3, _4, _5, _6 /* ad nauseam */, COUNT, ... ) COUNT\r\n#define VA_SIZE(\
    \ ... ) GET_COUNT( __VA_ARGS__, 6, 5, 4, 3, 2, 1 )\r\n \r\n#define VA_SELECT(\
    \ NAME, ... ) SELECT( NAME, VA_SIZE(__VA_ARGS__) )(__VA_ARGS__)\r\n \r\n// rep(overload)\r\
    \n#define rep( ... ) VA_SELECT(rep, __VA_ARGS__)\r\n#define rep2(i, n) for (int\
    \ i = 0; i < (int)n; i++)\r\n#define rep3(i, a, b) for (int i = a; i < (int)b;\
    \ i++)\r\n#define rep4(i, a, b, c) for (int i = a; i < (int)b; i += c)\r\n \r\n\
    // repll(overload)\r\n#define repll( ... ) VA_SELECT(rep, __VA_ARGS__)\r\n#define\
    \ repll2(i, n) for (ll i = 0; i < (ll)n; i++)\r\n#define repll3(i, a, b) for (ll\
    \ i = a; i < (ll)b; i++)\r\n#define repll4(i, a, b, c) for (ll i = a; i < (ll)b;\
    \ i += c)\r\n \r\n// rrep(overload)\r\n#define rrep( ... ) VA_SELECT(rrep, __VA_ARGS__)\r\
    \n#define rrep2(i, n) for (int i = n - 1; i >= 0; i--)\r\n#define rrep3(i, a,\
    \ b) for (int i = b - 1; i >= a; i--)\r\n#define rrep4(i, a, b, c) for (int i\
    \ = b - 1; i >= a; i -= c)\r\n \r\n// rrepll(overload)\r\n#define rrepll( ...\
    \ ) VA_SELECT(rrep, __VA_ARGS__)\r\n#define rrepll2(i, n) for (ll i = n - 1; i\
    \ >= 0ll; i--)\r\n#define rrepll3(i, a, b) for (ll i = b - 1; i >= (ll)a; i--)\r\
    \n#define rrepll4(i, a, b, c) for (ll i = b - 1; i >= (ll)a; i -= c)\r\n \r\n\
    // for_earh\r\n#define fore(e, v) for (auto&& e : v)\r\n \r\n// vector\r\n#define\
    \ all(v) v.begin(), v.end()\r\n#define rall(v) v.rbegin(), v.rend()"
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy: []
  timestamp: '2023-03-04 11:56:35+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/aoj/ntl-1-b.test.cpp
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---