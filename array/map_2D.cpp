#include <map>
#include <iostream>
using namespace std;
int main(){
	map<int, map<int, int>> a;
	a[1][2] = 1;
	cout<<a[1][2]<<endl;//1
	cout<<a[1][9]<<endl;//0
}
