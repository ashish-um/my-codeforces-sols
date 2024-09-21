#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl;
#define cin(v) for(auto &i:v){cin>>i;}

char nextChar(char c){
   if(c == 'z'){
      return 'a';
   }
   return char(int(c)+1);
}

signed main(){
   //  B - Construct the String 
   int t; cin >> t;
   while(t--){
      int n, a, b; cin >> n >> a >> b;

      string s;
      char start = 'z';
      int dist = b;

      
      for(int i=1; i<=a; i++){
         if(dist > 0){
            dist--;
            s += nextChar(start);
            start = nextChar(start);
         }else{
            s += start;
         }
      }

      for(int u=2; u<=n-a+1; u++){
         unordered_set<char> ms;
         for(int i=u-1; i < s.length(); i++){
            ms.insert(s[i]);
         }
         dist = ms.size();
         if(b-dist==0){
            s+=start;
         }else{
            s+=nextChar(start);
            start = nextChar(start);
         }
      }

      cout << s << endl;

   }
}
