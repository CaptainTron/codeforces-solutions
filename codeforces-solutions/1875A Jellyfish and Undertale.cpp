////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Sunday
// Date_of_submission  :- 2024-08-04
// Time_of_submission  :- 20:31:41
// Time_taken          :- 108 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 10
// Status              :- Submitted
////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()



void solve(){
    ll a, b, n;
    cin>>a>>b>>n;
    
    vector<ll>arr(n);
    for(auto &it:arr) cin>>it;
    
    ll total = b;
    for(auto &it:arr){
        total += min(1ll+it, a*1ll)-1;
    }
    cout<<total<<endl;
}



int main(){
    IOS;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


// ------ STAR THIS REPO IF YOU FOUND HELPFUL ---------
// धन्यवाद !