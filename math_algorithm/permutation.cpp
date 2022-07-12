class Permutation {
public:
    vector<long long>f;
    long long mod;
    void init(long long mod_in, int n) {
		f.resize(n+1);
        mod = mod_in;
        f[0] = 1;
        for(int i=1; i<=n; i++) f[i] = (f[i - 1] * i) % mod;
	}
    long long my_pow(long long a, long long b){
        a%=mod;
        if(a==0)return 0;
        long long ans = 1;
        while(b){
            if (b%2==1) ans = ans*a%mod;
            a = a*a%mod;
            b /= 2; 
        }
        return ans;
    }
    long long P(int n, int k) {
        long long a = f[n]; // = n!
        long long c = my_pow(f[n-k],mod-2); // = 1/(n-k)!
        long long ans = (a*c) % mod;
        if (ans<0)ans += mod;
        return ans;
    }
};
