#include <bits/stdc++.h>
using namespace std;


int main(){
    // 69A - Young Physicist 
    int t; cin >> t;
    int sum1{},sum2{},sum3{};
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        sum1+=a;
        sum2+=b;
        sum3+=c;
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}