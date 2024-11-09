#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
    
void solve(){
    int n; cin >> n;
    vector<int> v(n); cin(v);
    for(int i=1; i<n; i++){
        v[i] += v[i-1];
    }

    vector<int> help(*v.rbegin()+1);

    int count=1;
    for(int i=0;i<*v.rbegin()+1;i++){
        if(i>v[count-1]){
            count++;
        }
        help[i] = count;
    }
    int m; cin>>m;
    for(int i{}; i<m; i++){
        int inp; cin >> inp;

        cout << help[inp] << "\n";
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