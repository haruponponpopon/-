#include<iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
	int v,e; //頂点の数v, 辺の数e
	cin>>v>>e;
	vector<vector<int>> graph(v+1); //グラフの隣接リスト
	vector<int>in(v+1); //頂点の入次数を管理
	for (int i=0; i<e; i++){
		int s,t;cin>>s>>t;
		//頂点sから頂点tへの有向辺
		graph[s].push_back(t);
		in[t]++;
	}m

	//入次数が0の頂点の集合
	queue<int> in0;

	//入次数が0の頂点であればin0に追加
	for (int i=1; i<=v; i++){
		if (in[i]==0)in0.push(i);
	}

	//ソートされた後のグラフ
	vector<int> ans_order;
	//in0が空になるまでループ
	while (in0.size()){
		//in0の集合から一つ取り出す
		int current = in0.front(); in0.pop();
		ans_order.push_back(current);
		for (auto& next: graph[current]){
			//隣接する頂点の入次数を-1
			in[next]--;
			//これによって入次数が0になればin0に追加
			if (in[next]==0) in0.push(next);
		}
	}

	//トポロジカルソート後の訪問順
	for (int node: ans_order)cout<<node<<" ";
	cout<<endl;

	//閉路のときYes, 閉路でないときNo
	if ((int)ans_order.size()==v) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
