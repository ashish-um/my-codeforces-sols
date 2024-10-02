#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    // B - K-Sort 
    int n; cin >> n;
    int mx = -LONG_MAX;
    vector<int> v(n);
    cin(v);

    vector<int> diffs;
    for(int i{};i<n;i++){
        mx = max(v[i], mx);
        if(v[i]<mx){
            diffs.push_back(mx-v[i]);
        }
    }

    diffs.push_back(0);
    qsort(diffs);

    int cost{};
    for(int i=1; i<diffs.size(); i++){
        cost += (diffs.size()-i+1)*(diffs[i]-diffs[i-1]);
    }
    cout << cost << endl;
}

signed main(){
    int t; cin >>t;
    while(t--){
        solve();
    }
}
