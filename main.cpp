#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   //  1462C - Unique Number 
   int t; cin >> t;
   while(t--){
      int n; cin >> n;

      if(n>45) {
         cout << -1 << endl;
         continue;
      }

      // 1 digit
      if(n/10 == 0){
         cout << n << endl;
         continue;
      }

      int temp = n;
      int it = 10;
      while(temp >= it){
         it--;
         temp -= it;
      }
      
      string s{};
      for(int i=9; i>=it; i--){
         s += to_string(i);
      }
      reverse(s.begin(), s.end());
      cout << temp << s << endl;

   }
}