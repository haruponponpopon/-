//1つ目脳死　30C1くらいなら計算できる  

    ll combination(ll n, ll r) {
      if ( r * 2 > n ) r = n - r;
      ll dividend = 1;
      ll divisor  = 1;
      for ( unsigned int i = 1; i <= r; ++i ) {
        dividend *= (n-i+1);
        divisor  *= i;
      }
      return dividend / divisor;
    }
//2つ目 nが非常に大きい時
long long nCk(long long n,long long k,long long mod)
{
    long long t=1;
    if (k>n-k) k=n-k;
    for (int i=0;i<k;++i)
    {
        t=(t*(n-i))%mod;
        t=(t*my_pow(i+1,mod-2,mod))%mod;
    }
    return t;
}
//3つ目 combinationをたくさん計算したい時
class Combination {
public:
    vector<long long>f;
    vector<long long>rf;
    long long mod;
    void init(long long mod_in, int n) {
		f.resize(n+1);
        rf.resize(n+1);
        mod = mod_in;
        f[0] = 1;
        for(int i=1; i<=n; i++) f[i] = (f[i - 1] * i) % mod;
        for(int i=0; i<=n; i++) rf[i] = inv(f[i]);
	}
    long long inv(long long x) {
        long long res = 1;
        long long k = mod - 2;
        long long y = x;
        while (k) {
            if (k & 1) res = (res * y) % mod;
            y = (y * y) % mod;
            k /= 2;
        }
        return res;
    }
    long long C(int n, int k) {
        long long a = f[n]; // = n!
        long long b = rf[n-k]; // = (n-k)!
        long long c = rf[k]; // = k!

        long long bc = (b * c) % mod;

        return (a * bc) % mod;
    }
};
