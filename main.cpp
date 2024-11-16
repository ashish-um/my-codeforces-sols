#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    int n; cin >> n;
    if(floor(360.0/(180-n)) == ceil(360.0/(180-n))){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

signed main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
}           