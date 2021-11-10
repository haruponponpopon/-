# キュー
FIFOのデータ構造  

## 基本  
    #include <queue>
    #include <iostream>
    using namespace std;
    int main(){
        queue<int> que;
        //要素の追加
        que.push(3);
        que.push(1);
        que.push(2);
        cout << "size:" << que.size() << endl; //サイズの取得
        cout << "end:" << que.back() << endl; //末尾の要素を取得
        while(!que.empty()){
            cout << que.front() << " ";  //先頭の要素を取得
            que.pop(); //先頭の要素を削除
        }
    }
出力

	size:3
	end:2
	3 1 2
## 優先度付きキュー  
    priority_queue<int> que1; //降順
	que1.push(3);
	que1.push(1);
	que1.push(4);
	while(!que1.empty()){
		cout << que1.top() << " ";
		que1.pop();
	}
	cout << endl;
	priority_queue<int,vector<int>,greater<int>> que2; //昇順  
	priority_queue<pair<int, int>,vector<pair<int, int>>,greater<>> que3;
	priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>que4;
	que2.push(3);
	que2.push(1);
	que2.push(4);
	while(!que2.empty()){
		cout << que2.top() << " ";
		que2.pop();
	}
	cout << endl;
出力

    4 3 1 
    1 3 4
## 複数の要素をキューに入れる  
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> q; 
	q.emplace(1,2); 
	q.emplace(3,1);
	q.emplace(2,3);
	while(!q.empty()){
		auto p = q.top();
		cout << "[" << p.first << "," << p.second << "] ";
		q.pop();
	}
	cout << endl;
出力  

    [1,2] [2,3] [3,1] 
# dequeue
```
#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> q;
    /*要素の追加*/
    q.push_front(3);
    q.push_back(1);
    /*要素の参照*/
    cout << q.front() << " " << q.back() << endl;
    /*要素の削除*/
    q.pop_front();
    q.pop_back();
}
```
