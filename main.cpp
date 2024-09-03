#include <bits/stdc++.h>
using namespace std;

int main(){

    // 490A - Team Olympiad 

    int n; cin >> n;
    vector<int> a(n);
    unordered_map<int,vector<int>> me;
    int min=-1;

    //input
    for(int i{}; i<n; i++){
        cin >> a[i];
        me[a[i]].push_back(i+1);
    }

    if(me.size() < 3){
        cout << 0;
        return 0;

    }

    for(auto it:me){
        min = fmin(min, it.second.size());
        if(min == -1) min = it.second.size();
    }

    vector<vector<int>> res(min);
    cout << min << endl;

    for(auto it:me){
        for(int i{}; i<min; i++){
            res[i].push_back(it.second[i]);
        }
    }

    // output
    for(vector<int> a:res){
        for(int b:a){
            cout << b << " ";
        }
        cout << endl;
    }

}