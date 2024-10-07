#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

bool doCounter(int bit, int index){
    return (((bit>>index)&1)==1);
}

signed main(){
    // 1097B - Petr and a Combination Lock 
    int n; cin >> n;
    vector<int> v(n); cin(v);

    for(int i{}; i<(1<<n); i++){
        int sum{};
        for(int j{}; j<n; j++){
            if(doCounter(i, j)){
                sum += v[j];
            }else sum -= v[j];
        }
        sum = (sum%360);
        if(sum == 0){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

}