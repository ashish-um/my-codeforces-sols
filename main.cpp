#include <bits/stdc++.h>
using namespace std;

int main(){
   // Sieve of Erestosthenes


  int n = 10000;
  vector<bool> arr(n+1);
  int curr = 2;
  int next = curr;
  bool foundNext = false;

  bool madeChanges = true;
  int it{};
  while (madeChanges){
      madeChanges = false;
      it++;
      foundNext = false;
      for(int i=2*curr; i<=n; i+=curr) {
         if(arr[i]==0){
            arr[i] = 1; // 1 means composite
            madeChanges = true;
         }
      }

      for(int i=curr+1; i<n; i++){
         if(arr[i]==0 && !foundNext){
            next = i;
            foundNext = true;
         }
      }
      curr = next;
  }
  cout << "Iterations: " << it << endl;

   int count{};
  for(int i=1; i<=n; i++){
   if(arr[i]==0) count++;
  }
  cout << "Prime: " << count-1; // subtracting 1 cuz code considers 1 to be prime too
}