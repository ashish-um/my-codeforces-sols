#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<"";}
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

void solve(){
    // 489C - Given Length and Sum of Digits
    int m,s; cin>>m>>s;
    if(m == 0 || s>9*m){
        cout<<"-1 -1";
        return;
    }

    if(m==1 && s==0){
        cout << "0 0";
        return;
    }

    if(m > 0 && s==0){
        cout << "-1 -1";
        return;
    }
    
    vector<int> v(m);
    int sum = s;

    for(int i=m-1; i>=0; i--){
        if(s>9){
            v[i] = 9;
            s-=9;
        }else{
            v[i] = s;
            s = 0;
        }
    }

    if(v[0] == 0){
        v[0] = 1;
        for(int i=1; i<m;i++){
            if(v[i]>0){
                v[i]--;
                break;
            }
        }
    }

    cout(v); cout << " ";

    s = sum;
    for(int i=0; i<m; i++){
        if(s>9){
            v[i] = 9;
            s-=9;
        }else{
            v[i] = s;
            s = 0;
        }
    }

    cout(v);

}

signed main(){
    solve();
}