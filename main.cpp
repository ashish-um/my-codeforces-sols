#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   // A. Lunch Rush
   int n,k; cin >> n >> k;
   int max=-LONG_MAX;
   while(n--){
      int f,t; cin >> f >> t;
      if(t>k){
         max = fmax(max, (f-(t-k)));

      }else{
         max = fmax(max, f);

      }
   }

   cout << max;
}
