#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    int n,t; cin >> n >> t;
    string s; 

    if(n == 1 && t == 10){
        cout << -1;
        return;
    }

    if(t == 10){
        t = 0;
        n--;
        s += "1";
    }
    
    for(int i{}; i<n; i++){
        s += to_string(t);
    }

    cout << s;
}

signed main(){
    // int t; cin >>t;
    // while(t--){
    //     solve();
    //     cout << "\n";
    // }
    solve();
}