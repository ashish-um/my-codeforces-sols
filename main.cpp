#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n; cin >> m >> n;
    // sum = 0;
    int sum = ((m/2)*n)+((m%2)*(n/2));
    cout << sum;
}