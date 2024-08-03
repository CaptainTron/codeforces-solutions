////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Saturday
// Date_of_submission  :- 2024-08-03
// Time_of_submission  :- 01:42:28
// Time_taken          :- 46 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 10
// Status              :- Submitted
////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()



void solve(){
    int n;
    cin>>n;
    int x = INT_MAX;
    int y = 0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        x&=a;
        y|=a;
    }
    cout<<y-x<<endl;
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