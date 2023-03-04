#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B"

#include "../../modint/modint.hpp"

#define mint modint<1000000007>

int main() {
    int n, m;
    cin >> n >> m;
    cout << modpow(n, m) << '\n';
}