#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> sieve(){
   int num = 3000;
   vector<bool> v(num+1);
   vector<bool> prev;
   int curr = 2;
   while(prev != v) {
      prev = v;
      for(int i=curr*curr; i<=num; i+=curr){
         v[i] = 1; // 1 not prime
      }
      for(int n=curr+1; n<=num; n++){
         if(v[n] == 0){
            curr = n;
            break;
         }
      }
   }

   vector<int> res;
   for(int i=2; i<=num; i++){
      if(v[i] == 0){
         // cout << i << " ";
         res.push_back(i);
      }
   }
   return res;

}

signed main(){
   // 26A - Almost Prime 
   int n; cin >> n;

   vector<int> v = sieve();

   int CuntRes{};
   for(int i=6; i<=n; i++){
      int num = 0;
      int count{};
      while(v[num]<n && num < v.size()){
         if(i%v[num]==0){
            count++;
            if(count > 2){
               break;
            }
         }
         num++;
      }

      if(count == 2){
         CuntRes++;
      }
   }
   cout << CuntRes;
}