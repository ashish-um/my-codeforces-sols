#include <bits/stdc++.h>
using namespace std;

int main(){
    // 263A - Beautiful Matrix 
    int matrix[5][5];
    for(int i{}; i<5; i++){
        for(int j{}; j<5; j++){
            int in; cin >> in;
            if(in == 1){
                cout << abs(2-i)+abs(2-j);
                return 0;
            }
        }
    }
}