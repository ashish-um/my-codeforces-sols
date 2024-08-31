#include <bits/stdc++.h>
using namespace std;

int main(){
    //  Bit++
    
    int x{};
    int t; cin >> t;
    while(t--){
        string n;
        cin >> n;
        for(int i{}; i<3; ++i){
            if(n[i] == '+'){
                x++;
                break;
            }
            if(n[i] == '-'){
                x--;
                break;
            }
        }
    }
    cout << x;
    return 0;
}