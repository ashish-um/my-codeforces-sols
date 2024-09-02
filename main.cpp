#include <bits/stdc++.h>
using namespace std;

int main(){
    // 236A - Boy or Girl 

    string a; cin >>a;
    set<char> b;
    for(char cha:a){
        b.insert(cha);
    }
    cout << (b.size()%2==0?"CHAT WITH HER!":"IGNORE HIM!");
}