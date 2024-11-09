#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
    
void solve(){
    string s; cin >> s;   
    vector<pair<char, int>> v;

    v.push_back(make_pair(s[0], 1));

    int x = 1;
    while(s[x] == v[0].first){
        x++;
        v[0].second++;
    }

    int vIndex = 0;

    for(int i=x; i < s.length(); i++){
        if(v[vIndex].first != s[i]){
            v.push_back(make_pair(s[i], 1));
            vIndex++;
        }else{
            v[vIndex].second++;
        }
    }

    int ans = LONG_MAX;
    for(int i=1; i<v.size()-1; i++){
        if(v[i-1].first - v[i+1].first != 0){
            ans = min(ans, v[i].second+2);
        }
    }

    if(ans == LONG_MAX){
        cout << 0;
    }else cout << ans;

}
    
signed main(){
    int t; cin >>t;
    while(t--){
        solve();
        cout << "\n";
    }
    // solve();
}