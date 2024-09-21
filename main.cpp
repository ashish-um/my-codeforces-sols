#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl;
#define cin(v) for(auto &i:v){cin>>i;}

signed main(){
   // 460A Vasya and Socks 
   int n, m; cin >> n >> m;

   int diff = n/m;
   while(diff > 0){
      int exrtaC = n/m;
      n += diff;
      diff = (n/m) - exrtaC;
   }
   cout << n;
}
