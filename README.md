# AtCoderforLightBlue
水コーダー目指して  
競プロで学んだ知識を記録していく  
## 索引  
- [トポロジカルソート](https://github.com/haruponponpopon/AtCoderforLightBlue/blob/main/sort/topological_sort.cpp)  
- [BIT](https://github.com/haruponponpopon/AtCoderforLightBlue/blob/main/bit/BIT.cpp)  
- [BIT(区間最小値)](http://algoogle.hadrori.jp/algorithm/segment-tree.html)  [BIT(区間最大値)](https://github.com/haruponponpopon/AtCoderforLightBlue/blob/main/search/rmq.cpp)
- [UF木](https://github.com/haruponponpopon/AtCoderforLightBlue/blob/main/search/UnionFindTree.cpp)  
- [二分木setによる二分探索](https://github.com/haruponponpopon/AtCoderforLightBlue/blob/main/search/binary_tree_search.cpp)  
- [vectorによる二分探索](https://github.com/haruponponpopon/AtCoderforLightBlue/blob/main/search)  
- [小数点の桁数指定](https://github.com/haruponponpopon/AtCoderforLightBlue/blob/main/tips/print.cpp)
- [aのb乗をEで割った余りを高速計算](https://github.com/haruponponpopon/AtCoderforLightBlue/blob/main/math_algorithm/pow.cpp)
- [座標圧縮](https://github.com/haruponponpopon/AtCoderforLightBlue/blob/main/math_algorithm/coordinate_compression.cpp)
- [アフィン変換](https://qiita.com/RubyLrving/items/d4db90cbfc1a397eb139)
- [逆元](https://qiita.com/sesame0224/items/f2ac77c367f588c0d29d)
## 競技開始前のテンプレ  c++ GCC 9.2.1
vectorは初期化不要  
[stringの分割、結合](https://atcoder.jp/contests/abc223/editorial/2776)
```
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int INF = INT_MAX;
const long long LOF=LLONG_MAX;

int main(){
    
}
```
`stoiとかstoll`  
これ書くと改行問題が消える  
`
ios::sync_with_stdio(false), cin.tie(nullptr);
`
## swift 5.2.1
    //string型で読み込み
    //let line = readLine()!
    //string型で読み込んだものをint型に変換
    //let ii = n.map { Int(String($0))! }
    //numbers配列に数字の読み込み
    //let numbers = readLine()!.split(separator: " ").map { Int($0)! }
swiftで解いてみた  
[ABC185-A](https://atcoder.jp/contests/abc185/submissions/22780120)
/[ABC182-C](https://atcoder.jp/contests/abc182/submissions/22781335)

## python 3.8.2  
[標準入力で参考にしたサイト](https://qiita.com/jamjamjam/items/e066b8c7bc85487c0785)  
pythonで解いてみた  
[ABC182-D](https://atcoder.jp/contests/abc182/submissions/22783285)  /[ARC120-B](https://atcoder.jp/contests/arc120/submissions/22921382)  
## go
[標準入力で参考にしたサイト](https://qiita.com/syumai/items/d4d436eacc58ffbd8200)  
[典型](https://atcoder.jp/contests/typical90/submissions/23940277)
