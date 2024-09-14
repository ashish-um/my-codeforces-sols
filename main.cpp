#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

   // 1985D - Manhattan Circle 	
   int t; cin >> t;
   while(t--){
      int x, y; cin >> x >> y;
      pair<int, int> maxData;
      int maxIndex;
      for(int i=1; i<=x; i++){
         string s; cin >> s;
         int len{};

         int jStart = -1;
         for(int j{}; j<s.length(); j++){
            if(s[j] == '#'){
               if(jStart==-1) jStart = j;
               len++;
            }
         }
         if(len > maxData.first){
            maxIndex = i;
            maxData.first = len;
            maxData.second = jStart+len/2;
         }
         // maxData.first = fmax(len, maxData.first);
      }

      cout << maxIndex << " " << maxData.second+1 << endl;
   }
}