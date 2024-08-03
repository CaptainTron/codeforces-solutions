////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Thursday
// Date_of_submission  :- 2024-08-01
// Time_of_submission  :- 19:31:20
// Time_taken          :- 46 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 3
// Status              :- Submitted
////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()

void solve(){
    ll a, b, c;
    cin>>a>>b>>c;
    
    vector<int>arr = {a, b, c};
    for(int i=1; i<=5; i++){
        sort(arr.begin(), arr.end());
        arr[0]++;
    }
    
    cout<<(arr[0] * arr[1] * arr[2])<<endl;
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