#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    // D - Black and White Stripe 
    int n,k;cin>>n>>k;
    string s; cin>>s;

    int left = 0;
    int right = 0;
    int sum=0;
    int efforts{};
    int res = LONG_MAX;

    while(right <= n){
        if(sum == k && n != k){
            res = min(res, efforts);
            // cout << left <<" "<<right << ": "<< efforts << ", ";
            efforts -= (s[left++] == 'W' ? 1 : 0);
            efforts += (s[right++] == 'W' ? 1 : 0);
        }else{
            efforts += (s[right++] == 'W' ? 1 : 0);
            sum++;
        }
    }

    if(n == k){
        cout << efforts << endl;
    }else cout << res << endl;
}

signed main(){
    int t; cin >>t;
    while(t--){
        solve();
    }
}
