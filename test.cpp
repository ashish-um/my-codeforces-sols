#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    // 1343C - Alternating Subsequence 
    int n; cin >> n;
    vector<int> v(n);cin(v);

    bool currPos=v[0]>0;
    int temp=LONG_MIN, sum{};
    for(int i{};i<n;i++){
        if((v[i]>0) != currPos) {
            sum += temp;
            temp = LONG_MIN;
        }
        currPos = (v[i] > 0);
        temp = max(v[i], temp);
    }
    sum += temp;
    cout << sum << "\n";
}


signed main(){
    int t; cin >> t;
    while(t--){
       solve();
    }
}