#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   int t;
   cin >> t;

   while(t--){
      int n,k; cin >> n >> k;
      string s; cin >> s;

      unordered_map<char, int> m;

      for(char c:s){
         m[c]++;
      }

      int even{}, odd{};
      for(auto it:m){
         if((float)it.second/2>0){
            even += (it.second/2)*2;
            odd += it.second%2;
         }else{
            odd += it.second;
         }
      }

      int diff = odd-k;

      if(diff<2){
         if(diff < 0){
            if(even + diff > 0) cout << "YES";
            else cout << "NO";
         } else cout << "YES";
      }else{
         cout << "NO";
      }
      cout << endl;
   }
   
}
