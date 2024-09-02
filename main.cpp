#include <bits/stdc++.h>
using namespace std;

int main(){
    // 339A - Helpful Maths 
    string a; cin >> a;
    vector<int> b;
    for(char cha:a){
        if(int(cha) != 43){
            b.push_back(int(cha)-'0');
        }
    }

    sort(b.begin(), b.end());

    for(int i{}; i<b.size(); i++){
        if(i == b.size()-1){
            cout << b[i];
        }else{
            cout << b[i] << "+";
        }
    }

    return 0;
}