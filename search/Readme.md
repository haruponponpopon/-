# 二分探索
## TrueかFalseかを返す普通のにぶたん。
```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int> a = {1,2,3,3,6,9,10};  //昇順にソート
	cout << binary_search(a.begin(), a.end(), 1) << " ";
	cout << binary_search(a.begin(), a.end(), 3) << " ";
	cout << binary_search(a.begin(), a.end(), 5) << endl;
}
```
実行結果  
`1 1 0`
## lower_bound
配列に見つからなかったら一つ大きい値が返ってくる
```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int> a = {1,2,3,3,3,6,9,10};  //昇順にソート
	//イテレーターを返す
	auto a1 = lower_bound(a.begin(), a.end(), 1);
	auto a2 = lower_bound(a.begin(), a.end(), 3);
	auto a3 = lower_bound(a.begin(), a.end(), 7);
	auto a4 = lower_bound(a.begin(), a.end(), 10);
	auto a5 = lower_bound(a.begin(), a.end(), 15);

	cout << "値の表示" << endl;
	cout << *a1 << " " << *a2 << " " << *a3 << " " << *a4 << " " << *a5 << endl;
	cout << "先頭からの距離" << endl;
	cout << a1 - a.begin() << " " << a2 - a.begin() << " " << a3-a.begin() << " ";
	cout << a4 - a.begin() << " " << a5 - a.begin() << endl;
	cout << "末尾までの距離" << endl;
	cout << a.end() - a1 << " " << a.end() - a2 << " " << a.end() - a3 << " ";
	cout << a.end() - a4 << " " << a.end() - a5 << endl;
	return 0;
} 
```
実行結果
```
値の表示
1 3 9 10 0
先頭からの距離
0 2 6 7 8
末尾までの距離
8 6 2 1 0
```
## upper_bond
keyより大きい値を返す  
```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int> a = {1,2,3,3,3,6,9,10};  //昇順にソート
	//イテレーターを返す
	auto a1 = upper_bound(a.begin(), a.end(), 1);
	auto a2 = upper_bound(a.begin(), a.end(), 3);
	auto a3 = upper_bound(a.begin(), a.end(), 7);
	auto a4 = upper_bound(a.begin(), a.end(), 10);
	auto a5 = upper_bound(a.begin(), a.end(), 15);

	cout << "値の表示" << endl;
	cout << *a1 << " " << *a2 << " " << *a3 << " " << *a4 << " " << *a5 << endl;
	cout << "先頭からの距離" << endl;
	cout << a1 - a.begin() << " " << a2 - a.begin() << " " << a3-a.begin() << " ";
	cout << a4 - a.begin() << " " << a5 - a.begin() << endl;
	cout << "末尾までの距離" << endl;
	cout << a.end() - a1 << " " << a.end() - a2 << " " << a.end() - a3 << " ";
	cout << a.end() - a4 << " " << a.end() - a5 << endl;
	return 0;
} 
```
実行結果 
```
値の表示
2 6 9 0 0
先頭からの距離
1 5 6 8 8
末尾までの距離
7 3 2 0 0
```
