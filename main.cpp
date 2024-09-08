#include <bits/stdc++.h>
using namespace std;

int main(){
// 1896A - Jagged Swaps 

   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      vector<int> a; 
      vector<int> sorted;
      for(int i{}; i<n; i++){
         int inp; cin >> inp;
         a.push_back(inp);
      }
      sorted = a;
      sort(sorted.begin(), sorted.end());

      // Actual Program
      bool madeChanges = true;
      while(madeChanges){
         madeChanges = false;
         for(int i=1; i<a.size()-1; i++){
            if(a[i-1]<a[i] && a[i]>a[i+1]){
               iter_swap(a.begin()+i, a.begin()+i+1);
               madeChanges = true;
            }
         }
      }

      if(sorted == a){
         cout << "YES" << endl;
      }else{
         cout << "NO" << endl;
      }
   }
}