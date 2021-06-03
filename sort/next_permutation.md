## 順列列挙 
next_permutationの使い方   
[参考にした記事](https://qiita.com/siser/items/a91022071b24952d27d9)  


    #include <iostream>
    #include <vector>
    #include <algorithm>
    int main(){
        vector<int>A = {1,2,3};  //vectorの中身は昇順じゃないとダメ {2,3,4}とかもOK
        do {
            for (int i=0; i<3; i++){
                cout << A.at(i) << " ";
            }
            cout << endl;
        }while(next_permutation(A.begin(), A.end())); //vectorで書くならこう
        return 0;
    }

実行結果

    1 2 3 
    1 3 2 
    2 1 3 
    2 3 1 
    3 1 2 
    3 2 1
    
問題例  [ABC183 C - Travel](https://atcoder.jp/contests/abc183/tasks/abc183_c) 
