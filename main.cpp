#include <bits/stdc++.h>
using namespace std;

char to_lower(char c){
    if(int(c)>=65 && int(c)<=90){
        return c+32;
    }
    return c; 
    
}

int main(){
    // 118A - String Task 
    string t; cin >> t;
    unordered_set<char> yo = {'a','e','i','o','u', 'y'};
    for(char cha:t){
        char smol = to_lower(cha);
        if(yo.count(smol)==0){
            cout << "." << smol;
        }
        
    }
}