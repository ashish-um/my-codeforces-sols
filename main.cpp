#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isVOW(char c){
   if(c == 'a' || c == 'e') return true;
   return false;
}

signed main(){
// 1915D - Unnatural Language Processing 

   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      string s; cin >> s;

      string res = string(1, s[0]) + s[1];
      int last = 1;
      for(int i=2; i<n; i++){
         if(isVOW(s[i])) {
            if(i-last == 2 || i-last == 3){
               char temp = res[res.length()-1];
               res[res.length()-1] = '.';
               res+= temp;
               res+= s[i];
            }
            last = i;
         }else{
            res += s[i];
         }
      }

      
      cout << res << endl;
   }
}