#include <bits/stdc++.h>
using namespace std;

char to_lowecase(char a){
    if(int(a) >= 65 && int(a) <= 90){
        return char(int(a)+32);
    }
    return a;
}

int main(){
    // 112A - Petya and Strings 
    
    string a, b;
    cin >> a >> b;
    for(int i{}; i<a.length(); i++){
        char A = to_lowecase(a[i]);
        char B = to_lowecase(b[i]);

        if(int(A) > int(B)){
            cout << 1;
            return 0;
        }
        if(int(A) < int(B)){
            cout << -1;
            return 0;
        }

    }
    cout << 0;
}