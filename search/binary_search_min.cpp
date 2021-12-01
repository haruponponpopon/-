#include <iostream>
#include <climits>
using namespace std;
///////////////long long のときはINT_MAX二箇所をLLONG_MAXに変更
template <typename T>
class Segment_tree {
	public :
		Segment_tree( int _n ) {
            int N = 1;
            while (N<_n){
                N*=2;
            }
			n = N ;
			tree.resize(2*n,INT_MAX) ;
		}

		T combine( T lchild, T rchild ) {
			return min(lchild, rchild);
		}
        //場所idxにvalをいれる
		void update( int idx, T val ) {
			for( tree[idx+=n] = val, idx /= 2 ; idx >= 1 ; idx /= 2 ) {
				tree[idx] = combine( tree[idx<<1], tree[idx<<1|1] );
			}
		}
        //lからrまでの最小値
		T query( int l, int r ) {
			T ans = INT_MAX ;
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
    Segment_tree<int> st(10);
    st.update(1,3);
    st.update(2,7);
    st.update(3,10);
    cout<<st.query(2,3)<<endl;
}
