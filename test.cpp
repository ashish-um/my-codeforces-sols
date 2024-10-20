#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    //  1399B - Gifts Fixing 
    int n; cin >> n;
    vector<int> a(n); cin(a);
    vector<int> b(n); cin(b);

    int aMiN = *min_element(all(a));
    int bMiN = *min_element(all(b));

    int res{};
    for(int i{}; i<n; i++){
        if(a[i]!=aMiN && b[i]!=bMiN){
            int m = max(a[i]-aMiN, b[i]-bMiN);
            res += m;
        }else{
            res += (a[i]-aMiN) + (b[i]-bMiN);
        }
    }

    cout << res << "\n";
}


signed main(){
    int t; cin >> t;
    while(t--){
       solve();
    }
}