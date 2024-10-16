#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    //  1342A - Road To Zero 
    int x,y,a,b; cin >> x>>y>>a>>b;
    int sm = min(x,y);
    int lg = max(x,y);

    int cost = (lg-sm)*a;

    if(2*a < b){
        cout << cost + (sm*(a*2));
    }else{
        cout << cost + sm*b;
    }
    cout << "\n";

}

signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}