# 二次元配列のソート 
二次元配列の宣言 `vector<vector<int>> A(N, vector<int>(5)); //N*5の二次元配列`   
`sort`の使い方 
0列目でソートしたい時  

    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    int main(){
        int vec_size = 5;
        vector<vector<int>> A = {{2,1},{4,2},{1,5},{5,1},{3,9}};
        sort(A.begin(),A.end(),[](const vector<int> &x,const vector<int> &y){return x[0] < y[0];});
        for (int i=0; i<vec_size; i++){
            cout << A[i][0] << " " << A[i][1] << endl;
        }
        return 0;
    }
    
実行結果

    1 5
    2 1
    3 9
    4 2
    5 1 
