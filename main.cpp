#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   // 1374B - Multiply by 2, divide by 6 
   int t; cin >> t;
   while(t--){
      int n; cin >>n;
      int i{};
      while(n%6 == 0 || n%3 == 0){
         if(n%6==0){
            n/=6;
         }else{
            n*=2;
         }
         i++;
      }
      if(n==1) cout << i << endl;
      else cout << -1 << endl;
   }
}