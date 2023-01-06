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

struct dsu {
    int n;
    vector<int> p;
    vector<int> sz;

    dsu(int _n) : n(_n) {
        p = vector<int>(n);
        iota(p.begin(), p.end(), 0);
        sz = vector<int>(n, 1);
    }

    inline int get(int x) {
        if (p[x] == x) {
            return x;
        } else {
            return p[x] = get(p[x]);
        }
    }

    inline bool unite(int x, int y) {
        x = get(x);
        y = get(y);
        if (x == y) {
            return false;
        }
        p[x] = y;
        sz[y] += sz[x];
        return true;
    }

    inline bool same(int x, int y) {
        return (get(x) == get(y));
    }

    inline int size(int x) {
        return sz[get(x)];
    }

    inline bool root(int x) {
        return (x == get(x));
    }
};
https://atcoder.jp/contests/abc279/submissions/37770575
