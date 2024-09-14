#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
 	// 1337B - Kana and Dragon Quest game 

   int t; cin >> t;
   while(t--){
      int x,n,m; cin >> x >> n >> m;

      int prev = x;
      for(int i{}; i<n; i++){
         x = (x/2) + 10;
         // cout << x << " ";
         if(x>prev){
            x = prev;
            break;
         }
         prev = fmin(x, prev);
      }

      for(int i{}; i<m; i++){
         x -= 10;
      }

      if(x <= 0){
         cout << "YES";
      }else{
         cout << "NO";
      }
      cout << endl;
   }
}