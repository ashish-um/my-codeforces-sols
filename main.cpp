#include <bits/stdc++.h>
using namespace std;

int main(){
//  432A - Choosing Teams 
    int n,k; cin >> n >> k;
    int count{};
    for(int i{}; i<n; i++){
        int a; cin >> a;
        if(a+k <= 5){
            count++;
        }
    }
    cout << count/3;
}