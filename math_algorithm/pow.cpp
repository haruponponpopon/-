/*aのb乗をEで割った余りを高速計算*/
long long my_pow(long long a, long long b, long long E){
    long long ans = 1;
    while(b){
        if (b%2==1) ans = ans*a%E;
        a = a*a%E;
        b /= 2; 
    }
    return ans;
}
