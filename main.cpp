#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   // B - Decoding 
   int n; cin >> n;
   string s; cin >> s;
   int median = s.length()/2;

   string res = (s.length()%2==0 ? "" : string(1,s[0]));

   if(s.length()<3){
      cout << s; 
      return 0;
   }

   for(int i=(s.length()%2 ==0 ? 0 : 1); i<s.length()-1; i+=2){
      res = string(1, s[i]) + res + string(1, s[i+1]);
   }
   cout << res;
}
