#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

signed main(){
    int n; cin >> n;
    vector<int>v(5);
    for(int i{}; i<n;i++){
        int inp; cin >> inp;
        v[inp]++;
    }

    int req = v[4] + v[3] + v[2]/2 + v[2]%2;

    v[1] = (v[1]-v[3]);
    v[1] = v[1] - (v[2]%2)*2;

    if(v[1]>4) {
        req += v[1]/4 + (v[1]%4>0?1:0);
    }else if(v[1]>0){
        req += 1;
    }

    cout << req;
}