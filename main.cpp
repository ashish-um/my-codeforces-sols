#include <bits/stdc++.h>
using namespace std;

int main(){
//    A. Next Round 
    int n,k; cin >> n >> k;
    int res{};
    int pos=1;
    int k_val = -1;
    while(n--){
        int a;
        cin >> a;
        if(pos == k) k_val = a;
        if(k_val > 0 && a < k_val){
            cout << res;
            return 0;
        }
        if(a != 0){
            ++res;
        }
        ++pos;
    }
    cout << res;
}