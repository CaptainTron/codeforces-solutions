///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Thursday
// Date_of_submission  :- 2024-08-01
// Time_of_submission  :- 00:20:19
///////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()


void solve(){
    int a, b, xk, yk , xq, yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    
    vector<pair<int, int>>dirs = {{a,b}, {a,-b}, {-a,b}, {-a,-b},
                                 {b,a}, {b,-a}, {-b,a}, {-b,-a}};
    
    int ans = 0;
    set<pair<int, int>>st1, st2;
    for(auto it:dirs){
        int x = xk + it.first;
        int y = yk + it.second;
        st1.insert({x, y});
        
        x = xq + it.first;
        y = yq + it.second;
        
        st2.insert({x, y});
    }
    
    for(auto it:st1){
        if(st2.find(it)!=st2.end()) ans++;
    }
    cout<<ans<<endl;
    
}
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}