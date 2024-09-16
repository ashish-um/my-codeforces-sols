#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   // 1807D - Odd Queries 
   int t; cin >> t;
   while(t--){
      int n,q; cin >> n >> q;
      vector<int> arr(n+1);
      vector<int> sums(n+1);
      for(int i=1; i<=n; i++) {
         cin >> arr[i];
         sums[i] = sums[i-1]+arr[i];
      }

      while(q--){
         int l,r,k; cin >> l >> r >> k;
         int sum = sums[n] - sums[r] + sums[l-1] + k*(r-l+1);

         if(sum%2==0){
            cout << "NO";
         }else{
            cout << "YES";
         }
         cout << endl;
      }
   }
}