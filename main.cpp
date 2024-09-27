#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())

signed main(){
   // 131A cAPS lOCK 
   string s; cin >> s;
   int upper{};
   for(char c:s){
      if(int(c) >= 65 && int(c)<=90){
         upper++;
      }
   }

   string n;
   if(upper == s.length()){
      for(char c:s){
         n += char(int(c)+32);
      }
   }else if(upper == s.length()-1 && s[0]>=97 && s[0]<=122){
      char first = s[0];
      for(char c:s){
         n += char(int(c)+32);
      }
      n[0] = char(int(first)-32);
   }
   else{
      n = s;
   }
   cout << n;
}
