#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   // A - Lights Out 
   vector<vector<bool>> v(5, vector<bool>(5, true));

   for(int i=1; i<=3; i++){
      for(int j=1; j<=3; j++){
         int inp; cin >> inp;
         v[i][j] = (inp%2!=0 ? !v[i][j] : v[i][j]);
         v[i-1][j] = (inp%2!=0 ? !v[i-1][j] : v[i-1][j]);
         v[i+1][j] = (inp%2!=0 ? !v[i+1][j] : v[i+1][j]);
         v[i][j-1] = (inp%2!=0 ? !v[i][j-1] : v[i][j-1]);
         v[i][j+1] = (inp%2!=0 ? !v[i][j+1] : v[i][j+1]);
      }
   }

   for(int i=1; i<=3; i++){
      for(int j=1; j<=3; j++){
         cout << v[i][j];
      }
      cout << endl;
   }

}