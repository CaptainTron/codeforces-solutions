////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-08-06
// Time_of_submission  :- 10:34:38
// Time_taken          :- 77 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 11
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
    int n, k;
    cin>>n>>k;
    vector<int>arr(k);
    for(auto &it:arr) cin>>it;
    int maxelement = *max_element(all(arr));
    
    int count = 0, same = 0;
    for(auto it:arr){
        if(it!=maxelement) count += (it-1) + it;
        if(it==maxelement) same++;
    }
    
    cout<<count + (same-1)*((maxelement-1)+maxelement)<<endl;
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