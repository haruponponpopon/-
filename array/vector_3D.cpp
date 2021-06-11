#include <iostream>
#include <vector>
using namespace std;
int main(){
	int x = 3;
	int y = 2;
	int z = 4;
	/*サイズx,y,zの三次元*/
	vector<vector<vector<int>>> data(x, vector<vector<int>>(y, vector<int>(z)));
	cout << data[x-1][y-1][z-1] << endl;
}
