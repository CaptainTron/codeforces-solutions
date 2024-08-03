////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Saturday
// Date_of_submission  :- 2024-08-03
// Time_of_submission  :- 19:01:28
// Time_taken          :- 62 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 13
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
    
    if((n&1)){
        if(n==1) cout<<3;
        else cout<<1;
    }else{
        if((n&(n-1))){
            cout<<(n&~(n-1));
        }else{
            cout<<n+1;
        }
    }
    cout<<endl;
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