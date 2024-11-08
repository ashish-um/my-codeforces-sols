#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    int x; cin >> x;
    int end = cbrt(x/2)+1;

    // cout << end; 
    // return;
    for(int i=1; i < end; i++){
        int left = x - pow(i,3);

        int m_cbrt = cbrt(left);
        // cout << " [" << left << ", " << m_cbrt << "] ";
        if(pow(m_cbrt, 3) == left){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}
 
signed main(){
    int t; cin >>t;
    while(t--){
        solve();
        cout << "\n";
    }
    // solve();
}