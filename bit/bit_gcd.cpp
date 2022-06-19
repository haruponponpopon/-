#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct sparse {
    using T = int;
    int n;
    int h;
    vector<vector<T>> table;
 
    T op(T x, T y) {
        return __gcd(x, y);
    }
 
    sparse(const vector<T> &v) {
        n = (int) v.size();
        h = 32 - __builtin_clz(n);
        table.resize(h);
        table[0] = v;
        for (int j = 1; j < h; j++) {
            table[j].resize(n - (1 << j) + 1);
            for (int i = 0; i <= n - (1 << j); i++) {
                table[j][i] = op(table[j - 1][i], table[j - 1][i + (1 << (j - 1))]);
            }
        }
    }
 
    T get(int l, int r) {//[l,r)
        // assert(l < r);
        int k = 31 - __builtin_clz(r - l);
        return op(table[k][l], table[k][r - (1 << k)]);
    }
};
int main(){
    vector<int>A = {1,6,3,10};
    sparse bit(A);
    cout<<bit.get(0,1)<<endl;//1
    cout<<bit.get(1,2)<<endl;//6
    cout<<bit.get(0,4)<<endl;//1
    cout<<bit.get(1,3)<<endl;//3
}
