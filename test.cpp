#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    int n; cin >> n;
    vector<int> x(n); cin(x);
    qsort(x);
    int q; cin >> q;
    for(int i{}; i<q; i++){
        int temp; cin >> temp;
        auto it = upper_bound(all(x), temp);

        if(it != x.begin()){
            cout << it - x.begin() << "\n";
        }else{
            cout << 0 << "\n";
        }
    }
}
 
signed main(){
    // int t; cin >>t;
    // while(t--){
    //     solve();
    //     cout << "\n";
    // }
    solve();
}