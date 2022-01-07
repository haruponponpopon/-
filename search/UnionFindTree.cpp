class UnionFind {
public:
	vector<int> par;
 
	void init(int sz) {
		par.resize(sz, -1);
	}
	int root(int pos) {
		if (par[pos] < 0) return pos;
		par[pos] = root(par[pos]);
		return par[pos];
	}
	void unite(int u, int v) {
		u = root(u); v = root(v);
		if (u == v) return;
        if (par[u] > par[v]) swap(u, v);
        par[u]+=par[v];
		par[v] = u;
	}
	bool same(int u, int v) {
		if (root(u) == root(v)) return true;
		return false;
	}
    int size(int u) {
        return -par[root(u)];
    }
};
