#include <bits/stdc++.h>
using namespace std;
#define int long long



vector<int> gen_vec(int c, int len){
   vector<int> res;
   for(int i{}; i<len; i++){
      if(i<c) res.push_back(4);
      else res.push_back(7);
   }
   return res;
}

signed main(){
   int n; cin>>n;
   for(int i=1; i<=to_string(n).length(); i++){
      // i = digits;
      for(int j{}; j<=i; j++){
         vector<int> my_vec = gen_vec(j, i);

         do{
            string num_str{};
            for(int elem:my_vec){
               num_str += to_string(elem);
            }
            int num = stoi(num_str);
            if(n%num == 0){
               cout << "YES";
               return 0;
            }
         }while (next_permutation(my_vec.begin(), my_vec.end()));
      }

   }
   cout << "NO";
}