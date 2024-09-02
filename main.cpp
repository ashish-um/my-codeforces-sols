#include <bits/stdc++.h>
using namespace std;

int main(){
    //  281A - Word Capitalization 
    string a; cin >>a;

    if(int(a[0]) >= 65 && int(a[0]) <= 90){
        cout << a;
        return 0;
    }    
    for(int i{}; i<a.length(); i++){
        if(i == 0){
            cout << char(a[0]-32); 
        }else{
            cout << a[i];
        }
    }
    return 0;
}