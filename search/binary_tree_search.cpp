#include <iostream>
#include <set>
using namespace std;
/*二分木を用いた二分探索*/
int main(){
	set<int> tree;
	tree.insert(3);
	tree.insert(5);
	tree.insert(8);
	auto ans = tree.lower_bound(4);
	cout<<*ans<<" "<<*prev(ans)<<" "<<*(--ans)<<endl; //5 3 3
}
