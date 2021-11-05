////区間の最大値を求める
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 300001
#include <climits>
template <typename T>
class Segment_tree {
	public :
		Segment_tree( int _n ) {
            int N = 1;
            while (N<_n){
                N*=2;
            }
			n = N ;
			tree.resize(2*n,0) ;
		}

		T combine( T lchild, T rchild ) {
			return max(lchild, rchild);
		}
        //場所idxにvalをいれる
		void update( int idx, T val ) {
			for( tree[idx+=n] = val, idx /= 2 ; idx >= 1 ; idx /= 2 ) {
				tree[idx] = combine( tree[idx<<1], tree[idx<<1|1] );
			}
		}
        //lからrまでの最大値
		T query( int l, int r ) {
			T ans = 0 ;
			for( l += n, r += n ; l <= r ; l /= 2, r /= 2 ) {
				if( l&1 ) {
					ans = combine( ans, tree[l++] ) ;
				}
				if( !(r&1) ) {
					ans = combine( ans, tree[r--] ) ;
				}
			}
			return ans ;
		}

	private :
		int n ;
		vector<T> tree ;
};

int main(){
    int n,k;cin>>n>>k;
    Segment_tree<int> BIT(300001);
    vector<int>a(n);
    for (auto &b:a)cin>>b;
    BIT.update(a[0],1);
    for (int i=1; i<n; i++){
        int res= BIT.query(max(a[i]-k,0),min(300000,a[i]+k));
        BIT.update(a[i],1+res);
    }
    cout<<BIT.query(0,300000)<<endl;
}
