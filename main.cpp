#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   int t; cin >> t;
   while(t--){
      // A - Mainak and Array 
      int n; cin >> n;
      vector<int> v(n);
      int max= -LONG_MAX;
      int min= LONG_MAX;
      int maxNearDiff = -LONG_MAX;
      for(int i{}; i<n; i++){
         cin >> v[i];
         max = fmax(max, v[i]);
         min = fmin(min, v[i]);
         if(i>=1 && i<n){
            maxNearDiff = fmax(maxNearDiff, v[i-1]-v[i]);
         }

      }
      int currMax = fmax(max - v[0], *v.rbegin() - min);


      cout << fmax(maxNearDiff, currMax) << endl;
   }
}
