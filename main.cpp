#include <bits/stdc++.h>
using namespace std;


int main(){
// 58A - Chat room 

    string s; cin >> s;
    int found{};
    for(char c:s){
        
        if(found == 0 && c=='h') found++;
        if(found == 1 && c=='e') found++;
        if(found == 3 && c=='l') found++;
        if(found == 2 && c=='l') found++;
        if(found == 4 && c=='o') {
            cout << "YES";
            return 0;
        }
        
    }
    cout << "NO";
}