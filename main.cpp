#include <bits/stdc++.h>
using namespace std;

int main(){
// 1890A - Doremy's Paint 3 
   int t; cin >> t;
   while(t--){
      int n; cin >> n;

      unordered_map<int, int> mappy;
      for(int i{}; i<n; i++){
         int inp; cin >> inp;
         mappy[inp]++;

      }
      
      // Solution

      if(mappy.size() == 1){
         cout << "Yes" << endl;
         continue;
      }
      if( mappy.size() > 2) {
         cout << "No" << endl;
         continue;
      }
      int diff{};
      int i{};
      for(auto it:mappy){
         if(i == 0) diff += it.second;
         else diff = abs(diff - it.second);
         i++;
      }

      if(diff > 1) cout << "No" << endl;
      else cout << "Yes" << endl;
   }
}