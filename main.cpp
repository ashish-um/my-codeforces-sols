#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

signed main(){
    467B 	
// Fedor and New Game 
    int n,m,k; cin >> n>> m>>k;
    vector<int> v;
    for(int i{}; i<=m;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    m=*v.rbegin();
    v.pop_back();
    int frand{};
    for(int i{}; i<v.size(); i++){
        if(__builtin_popcount(v[i]^m) <= k){
            frand++;    
        }
        
    }
    cout << frand;
}