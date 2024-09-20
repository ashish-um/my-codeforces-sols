#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   int n; cin >> n;
   string s; cin >> s;
   int median = s.length()/2;

   string res = (s.length()%2==0 ? "" : string(1,s[median]));
   for(int i=1; i<=median; i++){
      if(s.length()%2==0){
         res += (string(1, s[median-i]) + string(1, s[median+i-1]));

      }else{
         res += (string(1, s[median-i]) + string(1, s[median+i]));

      }
   }
   cout << res;
}
