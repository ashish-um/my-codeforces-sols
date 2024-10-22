#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    int n, m; cin >> n >> m;
    vector<int> v(n); cin(v);
    int maax = *max_element(all(v));
    while(m--){
        char oper; cin >> oper;
        int l,r; cin >> l >> r;

        if(maax>=l && maax <= r){
            if(oper == '+'){
                maax++;
            }else{
                maax--;
            }
        }

        cout << maax << " ";
    }
}

signed main(){
    int t; cin>>t;
    while(t--) {
        solve();
        cout << "\n";
    }

}