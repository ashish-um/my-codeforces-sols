#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

signed main(){
    // B - Make it Divisible by 25 
    string toFind[] = {"00","50","25","75"};
    int t; cin >>t;
    while(t--){
        string s; cin >> s;
        
        int ans = LONG_MAX;
        for(string it:toFind){
            int ptr = s.length()-1;
            int res{};
            while(ptr > 0 && s[ptr] != it[1]){
                ptr--;
                res++;
            }

            ptr--;

            while(ptr > 0 && s[ptr] != it[0]){
                ptr--;
                res++;
            }

            ans = min(res, ans);
        }

        cout << ans << endl;

    }
}