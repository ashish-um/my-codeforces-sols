#include <bits/stdc++.h>
using namespace std;

int main(){
// 1901A - Line Trip 

   int t; cin>>t;
   cout << endl;
   while(t--){
      int n,x; cin >> n >> x;
      int max=0;
      int prev = 0, curr;
      for(int i=0; i<n; i++){
         cin >> curr;
         int diff = curr-prev;
         max = fmax(max, diff);
         prev = curr;         
      }
      max = fmax(max, (x-curr)*2);
      cout << max << endl;
   }
}