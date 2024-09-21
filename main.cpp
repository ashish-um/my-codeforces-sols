#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl;
#define cin(v) for(auto &i:v){cin>>i;}

signed main(){
// B - Not Dividing 

   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      vector<int> v(n);
      // cin(v);
      for(int i{}; i<n; i++){
         cin >> v[i];
         if(v[i] == 1){
            v[i]++;
         }
      }

      // int steps{};
      for(int i=1; i<n; i++){
         if(v[i]%v[i-1] == 0){
            v[i]++;
            // i=0;
         }
      }

      cout(v);
      // cout << "steps: " << steps << "\n";
   }
}
