#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   // 313A - Ilya and Bank Account 
   int n; cin >> n;

   if(n>0) {
      cout << n;
      return 0;
   }
   int l = n%10;
   int l2 = (n%100)/10;

   string reduced = to_string(n/100);

   if(to_string(n).length() <= 3){
      int res = stoi(to_string(fmax(l,l2)));
      cout << res;
   }else{
      int res = stoi(reduced+to_string((int)fmax(l,l2)*-1));

      cout << res;
   }

}