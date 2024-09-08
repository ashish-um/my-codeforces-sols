#include <bits/stdc++.h>
using namespace std;

int main(){
// 1881A - Don't Try to Count 

   int t; cin >> t;
   while(t--){
      int n, m; cin >> n >> m;

      string x, s;
      cin >> x >> s;
      int tries{};
      for(int i{}; i < 10; i++){
         if(x.find(s) != x.npos){
            break;
         }
         x += x;
         tries++;
      }
      if(x.find(s) != x.npos){
         cout << tries << endl;
      }else{
         cout << -1 << endl;
      }
      
   }
}