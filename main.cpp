#include <bits/stdc++.h>
using namespace std;

int main(){
    //  791A - Bear and Big Brother 

    int a,b; cin >> a >> b;
    int count=0;
    while(b>=a){
        b*=2;
        a*=3;
        count++;
    }

    cout << count;
}