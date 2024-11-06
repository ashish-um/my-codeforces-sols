#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    int n, l; cin >> n >> l;
    vector<int> v(n); cin(v);

    qsort(v);

    double max_diff = LONG_MIN;
    for(int i=1; i<n; i++){
        max_diff = max(max_diff, (double)v[i] - v[i-1]);
    }
    max_diff /= 2;
    max_diff = max((double)v[0], max_diff);
    max_diff = max((double)l-*v.rbegin(), max_diff);

    cout << setprecision(10) << fixed << max_diff << endl;
}
 
signed main(){
    // int t; cin >>t;
    // while(t--){
    //     solve();
    //     cout << "\n";
    // }
    solve();
}