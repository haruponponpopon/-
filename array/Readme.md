# vector  
関数に渡すならこっち推奨
```
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<vector<int>> A(2);
	vector<vector<int>> B(N, vector<int>(5)); //N*5の配列B
	A[0].push_back(3);
	A[1].push_back(1);
	A[0].push_back(10);
	swap(A[0], A[1]);
	for (int i=0; i<(int)A[0].size(); i++) cout << A[0][i] << " ";
	cout << endl;
	for (int i=0; i<(int)A[1].size(); i++) cout << A[1][i] << " ";
	cout << endl;
	return 0;
}
```
こっちでもおけ
```
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> A[2];
	A[0].push_back(3);
	A[1].push_back(1);
	A[0].push_back(10);
	for (int i=0; i<(int)A[0].size(); i++) cout << A[0][i] << " ";
	cout << endl;
	for (int i=0; i<(int)A[1].size(); i++) cout << A[1][i] << " ";
	cout << endl;
	return 0;
}
```
# map
```
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main(){
   map<int, string> a;
   a[1] = "apple";
   a[0] = "banana";
   a[5] = "orange";
   cout << a[1] << endl; //apple

   for (const auto& b : a) {
       cout << b.first << ":" << b.second << " ";
  } //0:banana 1:apple 5:orange;
}
```
[練習問題(存在の有無)](https://atcoder.jp/contests/typical90/tasks/typical90_aa)
[練習問題(削除)](https://atcoder.jp/contests/typical90/tasks/typical90_ah)
```
#include <iostream>
#include <map>
using namespace std;
int main(){
	map<string, int> a; //キーが文字列、valueが数字
	a["apple"] = 1;
	a["banana"] = 2;

	auto b = a.find("apple"); //存在するかしないか
	if (b!=a.end()) cout << "find" << endl;
	else cout << "no exist" << endl;

    a.erase("apple"); //キーの削除

	b = a.find("apple");
	if (b!=a.end()) cout << "find" << endl;
	else cout << "no exist" << endl;

    cout << a.size() << endl; //サイズの取得
}
```
# set  
中身が二分木  
```
#include<set>
#include<iostream>
using namespace std;

int main(){
    set<int> a;
    /*要素の代入*/
    a.insert(9);
    a.insert(3);
    a.insert(5);
    /*要素の参照*/
    for (auto x: a) cout << x << " ";
    cout << endl;  //3 5 9 
}
```
## unordered_set
ハッシュ値
```
#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
	//重複を消して配列に入れる　s.size()で要素数を取得
	unordered_set<int> s;
	s.insert(1);
}
```
## unordered_set pair  
```
#include <unordered_set>

namespace std {
template <> struct hash<std::pair<int, int>> {
    inline size_t operator()(const std::pair<int, int> &v) const {
        std::hash<int> int_hasher;
        return int_hasher(v.first) ^ int_hasher(v.second);
    }
};

}

int main()
{
    std::unordered_set< std::pair<int, int> > edge;
}
```
# mapとset
```
#include<map>
#include<set>
#include<iostream>
using namespace std;
//0-2,2-1,2-3,3-1
int main(){
    map<int, set<int>> a;
    
    a[0].insert(2);
    a[2].insert(1);
    a[2].insert(3);
    a[3].insert(1);

    for (const auto& b: a){
        for (auto c: b.second) cout << b.first << "->" << c << " ";
    }  //0->2 2->1 2->3 3->1
}
```
# pair
```
#include<iostream>
#include<string>
#include <tuple>
using namespace std;
int main(){
    /*宣言*/
    pair<int, string> p;
    /*代入1*/
    p.first = 1;
    p.second = "hello";
    /*代入2*/
    p = {2, "thanks"};
    /*値の取り出し*/
    int a;
    string b;
    tie(a,b) = p;
    cout << a << " " << b;
}
```
