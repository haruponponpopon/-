https://atcoder.jp/contests/abc223/submissions/26657418
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
#define ll long long
class segment_tree {
private:
  ll sz;
  vector<ll> seg;
  vector<ll> lazy;
  void push(ll k){
    if (k < sz){
      lazy[k * 2] += lazy[k];
      lazy[k * 2 + 1] += lazy[k];
    }
    seg[k] += lazy[k];
    lazy[k] = 0;
  }
  void update(ll a, ll b, ll x, ll k, ll l, ll r){
    push(k);
    if (r <= a || b <= l) return ;
    if (a <= l && r <= b){
      lazy[k] = x;
      push(k);
      return ;
    }
    update(a, b, x, k * 2, l, (l + r) >> 1);
    update(a, b, x, k * 2 + 1, (l + r) >> 1, r);
    // 
    seg[k] = max(seg[k * 2], seg[k * 2 + 1]);
  }
  ll range_max(ll a, ll b, ll k, ll l, ll r){
    push(k);
    if (r <= a || b <= l) return INT_MIN;
    if (a <= l && r <= b) return seg[k];
    ll lc = range_max(a, b, k * 2, l, (l + r) >> 1);
    ll rc = range_max(a, b, k * 2 + 1, (l + r) >> 1, r);
    return max(lc, rc);
  }
public:
  segment_tree() : sz(0), seg(), lazy() {};
  segment_tree(ll N){
    sz = 1;
    while (sz < N){
      sz *= 2;
    }
    seg = vector<ll>(sz * 2, 0);
    lazy = vector<ll>(sz * 2, 0);
  }
  //l以上r以下をx増やす
  void update(ll l, ll r, ll x){
    update(l, r, x, 1, 0, sz);
  }
  //l以上r未満の最大値を返す
  ll range_max(ll l, ll r){
    return (range_max(l, r, 1, 0, sz));
  }
  void debug(){
    ll id = 1;
    cout << "--- seg ---" << endl;
    while (id <= sz){
      ll j = id;
      id *= 2;
      while (j < id){
        cout << seg[j] << " ";
        ++j;
      }
      cout << endl;
    }
    id = 1;
    cout << " --- lazy ---" << endl;
    while (id <= sz){
      ll j = id;
      id *= 2;
      while (j < id){
        cout << lazy[j] << " ";
        ++j;
      }
      cout << endl;
    }
  }
 
  ll getval(ll id){
    range_max(id, id+1);
    return seg[id + sz];
  }
 
};

int main(){
    int n,q; cin>>n>>q;
    string s;cin>>s;
    segment_tree sg(n+1);
    for (int i=0; i<(int)s.size(); i++){
        if (s[i]=='(')sg.update(i+1,n+1,-1);
        else sg.update(i+1,n+1,1);
    }
    for (int i=0; i<q; i++){
        int op,l,r; cin>>op>>l>>r;
        if (op==1){
            if (s[l-1]==s[r-1])continue;
            if (s[l-1]=='('){
                sg.update(l,r,2);
            }else if (s[l-1]==')'){
                sg.update(l,r,-2);
            }
            swap(s[l-1],s[r-1]);
        }else{
            bool ans = true;
            // int val_l = sg.getval(l);
            // int val_r = sg.getval(r);
            // if (val_l+1!=val_r)ans=false;
            // if (sg.range_max(l,r+1)!=val_r)ans=false;
            int pre = 0;
            if (l>1)pre = sg.getval(l-1);
            int gmin = sg.range_max(l,r+1) - pre;
            if (gmin>0)ans = false;
            int tail = sg.getval(r) - pre;
            if (tail != 0) ans = false;
            if (ans)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}
