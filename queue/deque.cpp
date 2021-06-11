#include <iostream>
#include <deque>
using namespace std;
int main(){
	deque<int> dq;
	/*データの追加*/
	dq.push_back(1); //dq = {1}
	dq.push_front(2); //dq = {2,1}
	dq.push_back(3); //dq = {2,1,3}
	/*データの取り出し*/
	cout << dq.front() << endl; //2
	cout << dq.back() << endl;  //3
	/*データの削除*/
	dq.pop_back(); //dq = {2,1}
	dq.pop_front(); //dq = {1}
}
