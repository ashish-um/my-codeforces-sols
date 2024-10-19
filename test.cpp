#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cout(v) for(auto i:v){cout<<i<<" ";}cout<<endl
#define cin(v) for(auto &i:v){cin>>i;}
#define qsort(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()

signed main(){
    // 2005B1 - The Strict Teacher (Easy Version) 
    
    int t; cin >>t;
    while(t--){
        int n,m,q;cin>>n>>m>>q;
        vector<int> teachers(m);
        cin(teachers);

        for(int i{}; i<q; i++){
            int david; cin >> david;

            int posMIN = LONG_MAX, negMIN = LONG_MIN;
            int minElem = LONG_MAX;
            int maxElem = LONG_MIN;
            for(int j{}; j<m; j++){
                if(teachers[j] - david > 0){ // POS DIFF
                    posMIN = min(posMIN, teachers[j]-david);
                }else{                      // NEG DIFF
                    negMIN = max(negMIN, teachers[j]-david);
                }
                minElem = min(minElem, teachers[j]);
                maxElem = max(maxElem, teachers[j]);
            }

            if(negMIN == 0){
                cout << 0;
            }
            else if(negMIN == LONG_MIN){
                cout << minElem-1;
            }
            else if(posMIN == LONG_MAX){
                cout << n-maxElem;

            }else{
                int mid = (negMIN + posMIN)/2;
                cout << min(posMIN-mid, abs(negMIN-mid));
            }
            cout << "\n";
        }
    }

}