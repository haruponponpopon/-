30C1くらいなら計算できる  
`#define ll int64_t`  お忘れなく  

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
