#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()


void solve(){
    // C - Two Teams Composing 
    int n; cin >> n;
    // vector<int> v(n);
    unordered_map<int, int> m;
    int max_elem;
    int mux = LONG_MIN;
    for(int i{}; i<n; i++){
        int temp; cin >> temp;
        m[temp]++;
        if(mux != max(mux, m[temp])){
            max_elem = temp;
            mux = max(mux, m[temp]);
        }
    }

    int my = min((int)(m.size()-1), m[max_elem]);
    if(m[max_elem] > m.size()){
        my = m.size();
    }
    cout << my;
}
 
signed main(){
    int t; cin >>t;
    while(t--){
        solve();
        cout << "\n";
    }
}