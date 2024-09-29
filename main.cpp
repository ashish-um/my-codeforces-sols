#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())

signed main(){
   //  1353C - Board Moves  
   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      int res{};
      for(int i=3,multipler=1; i<=n; i+=2, multipler++){
         res += ((i*4)-4)*multipler;
      }
      cout << res << endl;
   }
}
