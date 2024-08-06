////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-08-06
// Time_of_submission  :- 15:53:23
// Time_taken          :- 61 ms
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
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(auto &it:arr) cin>>it;
    
    if(arr[0]==arr[n-1]) cout<<"NO";
    else{
        string ans = "";
        cout<<"YES"<<endl;
        loop(i, 0, n){
            if(i==1) ans+='R';
            else ans+='B';
        }
        cout<<ans;
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