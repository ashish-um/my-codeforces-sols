#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    int n,k; cin >> n >> k;

    cout << ( n*((k+n-2)/(n-1) -1) + k - ((k+n-2)/(n-1) -1)*(n-1) );
}
 
signed main(){
    int t; cin >>t;
    while(t--){
        solve();
        cout << "\n";
    }
    // solve();
}