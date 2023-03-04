#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B"

#include "../../modint/modint.hpp"

#define mint modint<1e9+7>

int main() {
    int n, m;
    cin >> n >> m;
    cout << (mint)n.modpow(m) << '\n';
}