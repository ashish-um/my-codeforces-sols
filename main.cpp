#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    int n,m,x,y; cin>>n>>m>>x>>y;
    int cost{}, cnt{};
    for(int i{}; i<n; i++){
        string s; cin >> s;
        cnt=0;
        for(int j{}; j<s.length()-1; j++){
            if(s[j]=='.' && s[j+1]=='.'){
                cost += min(2*x,y);
                cnt+=2;
                j++;
            }else if(s[j]=='.'){
                cnt++;
                cost += x;
            }else{
                cnt=0;
            }
            if(j==s.length()-2 && s[j+1]=='.'){
                if(cnt%2==0){
                    cost+=x;
                }
            }            
        }
        if(s.length()==1 && s[0]=='.') cost+=x;
    }
    cout << cost << endl;
}

signed main(){
    int t; cin >>t;
    while(t--){
        solve();
    }
}
