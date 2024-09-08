#include <bits/stdc++.h>
using namespace std;

int main(){
   // Sieve of Erastosthenes

  int n = 1000000;
  vector<bool> arr(n+1);
  int curr = 2;
  int next = curr;
  bool foundNext = false;

  bool madeChanges = true;
  int it{};
  int count{};
  while (madeChanges){
      madeChanges = false;
      it++;
      foundNext = false;
      for(int i=curr*curr; i<=n; i+=curr) {
         if(arr[i]==0){
            arr[i] = 1; // 1 means composite
            madeChanges = true;
         }
      }
      for(int i=curr+1; i<n; i++){
         if(arr[i]==0 && !foundNext){
            next = i;
            foundNext = true;
            count++;
         }
      }
      curr = next;
  }
  cout << "Iterations: " << it << endl;

  for(int i=next; i<=n; i++){
   if(arr[i]==0) count++;
  }
  cout << "Prime: " << count; // subtracting 1 cuz code considers 1 to be prime too
}