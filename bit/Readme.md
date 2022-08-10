# AtCoderforGreen
競プロ解いてて難しかったけど解答読んで理解した問題をアウトプットする
## BIT
[説明](https://qiita.com/DaikiSuyama/items/7295f5160a51684554a7#bit%E3%81%A7%E3%81%AE%E5%80%A4%E3%81%AE%E6%9B%B4%E6%96%B0)  
bit数を数える
```
__builtin_popcount
__builtin_popcountll(n)
```
## XOR 
Binary Indexed Tree (BIT)、XORの融合問題 xor.pdf 参照  
[ABC185 F - Range Xor Query](https://atcoder.jp/contests/abc185/tasks/abc185_f)   
[解析したコード](https://atcoder.jp/contests/abc185/submissions/20092098)  
[提出したコード](https://atcoder.jp/contests/abc185/submissions/22776230)  
 キュー、セグ木の融合問題  
 [ARC120 C -Swaps2](https://atcoder.jp/contests/arc120/tasks/arc120_c)  
 [解析したコード](https://atcoder.jp/contests/arc120/submissions/22896481)  
## 偶数を作る  
``` 
int main(){
	for (int i=0; i<10; i++) {
		int j = i;
		if(j & 1) j ^= 1;
		cout << j << " ";
	}
	cout << endl;
	return 0;
} 
```
```0 0 2 2 4 4 6 6 8 8```
