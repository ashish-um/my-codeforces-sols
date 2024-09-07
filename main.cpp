#include <bits/stdc++.h>
using namespace std;

int main(){
// 1900A - Cover in Water 

   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      string str; cin >> str;

      int count{};
      vector<int> all;
      bool found3 = false;
      for(int i{}; i<n; i++){
         if(str[i] == '.'){
            count++;
            
         }else{
            if(count != 0){
               all.push_back(count);
            }
            count = 0;
         }
      }
      if(count != 0) all.push_back(count);
            
      int res{};
      for(int c:all){
         if(c>2){
            res=2;
            break;
         }
         else res += c;
      }
      cout << res << endl;
   }
}