template<long long mod>
struct modint{
    long long num;

    constexpr modint(long long x = 0) : num((x + mod) % mod) {}

    constexpr modint &operator += (const modint& rhs){
        num = (num + rhs.num) % mod;
        return *this;
    }
    constexpr modint &operator -= (const modint& rhs){
        num  -= rhs.num;
        while(num < 0) num += mod;
        num %= mod;
        return *this;
    }
    constexpr modint &operator *= (const modint& rhs){
        num = num * rhs.num % mod;
        return *this;
    }
    constexpr modint &operator /= (modint rhs){
        int exp = mod - 2;
        while(exp > 0){
            if(exp % 2){
                *this *= rhs;
            }
            rhs *= rhs;
            exp /= 2;
        }
        return *this;
    }

    constexpr modint operator ++ (){
        num = (num + 1) % mod;
        return *this;
    }
    constexpr modint operator ++ (int n){
        (void)n;
        modint tmp = *this;
        ++(*this);
        return tmp;
    }
    constexpr modint operator -- (){
        num = (num + mod - 1) % mod;
        return *this;
    }
    constexpr modint operator -- (int n){
        (void)n;
        const modint tmp = *this;
        --(*this);
        return tmp;
    }

    void modpow(ll y){
        modint tmp = (*this);
        (*this) = 1;
        while(y > 0){
            if(y % 2){
                (*this) *= tmp;
            }
            tmp *= tmp;
            y /= 2;
        }
    }

    constexpr modint operator + (const modint& rhs) const {
        return modint(*this) += rhs;
    }
    constexpr modint operator - (const modint& rhs) const {
        return modint(*this) -= rhs;
    }
    constexpr modint operator * (const modint& rhs) const {
        return modint(*this) *= rhs;
    }
    constexpr modint operator / (const modint& rhs) const {
        return modint(*this) /= rhs;
    }

    
    friend ostream &operator << (ostream& lhs, const modint& rhs){
        return lhs << rhs.num;
    }

    friend istream &operator >> (istream& lhs, modint& rhs){
        lhs >> rhs.num;
        return lhs;
    }
};

mint modpow(mint x, ll y){
    if(y == 0) return 1;
    mint e = modpow(x, y / 2);
    e = e * e;
    return e * (y % 2 == 0 ? 1 : x);
}