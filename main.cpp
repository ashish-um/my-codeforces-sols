#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

signed main(){
   // C. Not Adjacent Matrix (This was Awesome!!)
   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      vector<vector<int>> v(n, vector<int>(n));

      int num=1;
      for(int i{}; i<n; i++){
         v[i][i] = num++;
      }

      for(int i=1; i<n;i++){
         for(int j=0;j<n-i; j++){
            v[i+j][j] = num++;
         }
         for(int j=0;j<n-i; j++){
            v[j][i+j] = num++;
         }
      }

      if(n==2){
         cout << -1 << endl;
      }else{
         for(auto it:v){
            for(int _:it){
               cout << _ << " ";
            }
            cout << endl;
         }
      }
      
   }

}
