////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Thursday
// Date_of_submission  :- 2024-08-08
// Time_of_submission  :- 12:25:33
// Time_taken          :- 77 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 4
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
    ll n, a, b;
    cin>>n>>a>>b;
    
    ll ans = 0;
    if(a>=b) ans = n*a;
    else{
        int diff = b-a;
        if(diff>n){
            ans = n*(b+b-n+1)/2;
        }else if(diff<=1){
            ans = b*diff;
        }else{
            ans = diff*(a+b+1)/2;
        }
        ans += ((max(0ll, n-diff))*a);
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