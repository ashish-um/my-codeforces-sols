#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
// 1475B - New Year's Number 

   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      int n2020 = n, n2021 = n;

      while(n2020%2021 != 0 && n2021%2020 != 0){
         n2020 -= 2020;
         n2021 -= 2021;
         n = fmin(n2020,n2021);
         if(n < 2020) {
            break;
         }
      }
      if(n<2020){
         cout << "NO" << endl;
      }else cout << "YES" << endl;
   }
}