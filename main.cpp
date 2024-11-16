#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    string s; cin >> s;
    vector<int> v(s.length());
    for(int i=1; i < s.length(); i++){
        v[i] = v[i-1] + (s[i] == s[i-1]);
    }

    int m; cin >> m;
    for(int i{}; i < m; i++){
        int l,r; cin >> l >> r;
        if(r-l==1){
            if(v[l] > v[l-1]){
                cout << 1 << "\n";
            }else{
                cout << 0 << "\n";
            }
            continue;
        }
        cout << v[r-1] - v[l-1] << "\n";
    }

    // cout(v);
}

signed main(){
    solve();
    // int t; cin >> t;
    // while(t--){
    //     solve();
    //     cout << "\n";
    // }
}           