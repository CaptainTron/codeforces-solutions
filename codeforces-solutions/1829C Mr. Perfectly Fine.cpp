////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Friday
// Date_of_submission  :- 2024-08-02
// Time_of_submission  :- 00:51:40
// Time_taken          :- 359 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 16
// Status              :- Submitted
////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()



void solve(){
    ll n;
    cin>>n;
    
    ll mini_a = 1e9, mini_b = 1e9, mini_ab = 1e9;
    for(ll i=0; i<n; i++){
        ll minutes;
        string str;
        cin>>minutes>>str;
        
        if(str[0]=='1'){
            mini_a = min(mini_a, minutes);
        }
        if(str[1]=='1'){
            mini_b = min(mini_b, minutes);
        }
        
        if(str[0]=='1' && str[1]=='1'){
            mini_ab = min(mini_ab, minutes);
        }
    }
    
    ll mini = min((mini_a+mini_b), mini_ab);
    
    if(mini_a==1e9 && mini_ab==1e9) cout<<"-1";
    else if(mini_b==1e9 && mini_ab==1e9) cout<<"-1";
    else cout<<mini;
    cout<<endl;
}






int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


// ------ STAR THIS REPO IF YOU FOUND HELPFUL ---------
// धन्यवाद !