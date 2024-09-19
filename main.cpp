#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   //  1992C - Gorilla and Permutation 
   int t;
   cin >> t;

   while(t--){
      int n,m,k; cin >> n >> m >> k;
      for(int i=n; i>0; i--){
         if(i-m<=0){
            cout << m-i+1 << " ";
         }else{
            cout << i << " ";
         }
         
      }
      cout << endl;
   }
   
}
