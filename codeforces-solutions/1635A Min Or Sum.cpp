////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Saturday
// Date_of_submission  :- 2024-08-03
// Time_of_submission  :- 18:37:19
// Time_taken          :- 77 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 15
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
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &it:arr) cin>>it;
    
    vector<bool>check(31, 0);
    loop(i, 0, n){
        loop(j, 0, 31){
            if(arr[i] & (1<<j)) check[j] = true;
        }
    }
    ll ans = 0;
    loop(j, 0, 31){
        if(check[j]) ans+=(1<<j);
    }
    cout<<ans<<endl;
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