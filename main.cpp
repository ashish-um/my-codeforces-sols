#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

int msb(int n){
    return 63 - __builtin_clzll(n);
}

signed main(){
    // B - Rock and Lever 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n); cin(v);

        unordered_map<int, int> m;
        for(int i:v){
            int ms = msb(i)-1;
            m[ms]++;
        }

        int res{};
        for(auto &[x, y]:m){
            res += (y*(y-1))/2;
        }
        cout << res << endl;
    }
}