#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

signed main(){
    // 1829C - Mr. Perfectly Fine 
    int t; cin>>t;
    while(t--){

        int p; cin >> p;
        int mamin=LONG_MAX;

        vector<int> L,R;
        int l=-1,r=-1;

        while(p--){
            int m; cin >> m;
            string bit; cin >> bit;
            if(bit == "10") {
                if(l==-1) l = m;
                else l = min(l, m);
            }
            if(bit == "01") {
                if(r==-1) r=m;
                else r = min(r, m);
            }

            if(l>0 && r>0)
            mamin = min(mamin, (l+r));
            if(bit == "11") mamin = min(mamin, m);
        }

        if(mamin == LONG_MAX){
            cout << -1 << endl;
        }else cout << mamin << endl;
    }
}