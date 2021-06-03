# AtCoderforGreen
競プロ解いてて難しかったけど解答読んで理解した問題をアウトプットする
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
