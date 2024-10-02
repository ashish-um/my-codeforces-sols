#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    int k; cin>>k;
    int i=k;
 
    int root = sqrt(i);
    i=(2*k-(i-root))-1;
    // cout << i << endl;
    while(i++){
        root = sqrt(i);
 
        // cout << i  << ": " << (i-root) << ", ";
        if((i-root) == k){
            cout << i << endl;
            break;
        }
    }
}

signed main(){
    int t; cin >>t;
    while(t--){
        solve();
    }
}
