long long mod = 2;
 
struct mint {
    long long value;
    mint(long long x = 0) {
        value = x % mod;
        if (value < 0) value += mod;
    }
    mint& operator+=(const mint& other) {
        if ((value += other.value) >= mod) value -= mod;
        return *this;
    }
    mint& operator-=(const mint& other) {
        if ((value -= other.value) < 0) value += mod;
        return *this;
    }
    mint& operator*=(const mint& other) {
        value = value * other.value % mod;
        return *this;
    }
    mint& operator/=(const mint& other) {
        long long a = 0, b = 1, c = other.value, m = mod;
        while (c != 0) {
            long long t = m / c;
            m -= t * c;
            swap(c, m);
            a -= t * b;
            swap(a, b);
        }
        a %= mod;
        if (a < 0) a += mod;
        value = value * a % mod;
        return *this;
    }
    mint operator+(const mint& rhs) const { return mint(*this) += rhs; }
    mint operator-(const mint& rhs) const { return mint(*this) -= rhs; }
    mint operator*(const mint& rhs) const { return mint(*this) *= rhs; }
    mint operator/(const mint& rhs) const { return mint(*this) /= rhs; }
    mint& operator++() { return *this += 1; }
    mint& operator--() { return *this -= 1; }
    mint operator++(int) {
        mint result(*this);
        *this += 1;
        return result;
    }
    mint operator--(int) {
        mint result(*this);
        *this -= 1;
        return result;
    }
    mint operator-() { return mint(-value); }
    bool operator==(const mint& rhs) { return value == rhs.value; }
    bool operator!=(const mint& rhs) { return value != rhs.value; }
    bool operator<(const mint& rhs) { return value < rhs.value; }
};
string to_string(const mint& x) {
    return to_string(x.value);
}
ostream& operator<<(ostream& stream, const mint& x) {
    return stream << x.value;
}
istream& operator>>(istream& stream, mint& x) {
    stream >> x.value;
    x.value %= mod;
    if (x.value < 0) x.value += mod;
    return stream;
}
 
mint power(mint a, long long n) {
    mint res = 1;
    while (n > 0) {
        if (n & 1) {
            res *= a;
        }
        a *= a;
        n >>= 1;
    }
    return res;
}
 
vector<mint> fact(1, 1);
vector<mint> finv(1, 1);
 
mint C(int n, int k) {
    if (n < k || k < 0) {
        return mint(0);
    }
    while ((int) fact.size() < n + 1) {
        fact.emplace_back(fact.back() * (int) fact.size());
        finv.emplace_back(mint(1) / fact.back());
    }
    return fact[n] * finv[k] * finv[n - k];
}
