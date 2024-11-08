#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    int n,t; cin>>n>>t;
    vector<int> v(n); cin(v);

    int sum{};
    int last{};
    int count{};
    int res = LONG_MIN;

    for(int i{};i<n; i++){
        count++; 
        sum+=v[i];
        while(sum>t){
            sum -= v[last];
            last++;
            count--;
        }

        res = max(res, count);
    }
    cout << res;
}
 
signed main(){
    // int t; cin >>t;
    // while(t--){
    //     solve();
    //     cout << "\n";
    // }
    solve();
}