# 与えられた文字で始まる整数列を作る  
`iota(A.begin(), A.end(),0); `の使い方  
0から始まる等差数列のサンプルコード　  

    #include <iostream>
    #include <vector>
    #include <numeric>
    using namespace std;

    int main(){
        int array_size = 5;
        vector<int>A(array_size);
        iota(A.begin(), A.end(),0); 
        for (int i=0; i<array_size; i++) cout << A.at(i) << " ";
        cout << endl;
        return 0;
    }
    
 実行結果 `0 1 2 3 4`
 
 5から始まる等差数列  `iota(A.begin(), A.end(),5);` に書き換え 
