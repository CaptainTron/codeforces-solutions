////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-08-06
// Time_of_submission  :- 10:05:06
// Time_taken          :- 93 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 18
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
    
    vector<int>arr(n);
    for(auto &it:arr) cin>>it;
    
    if(n==1){
        cout<<0<<endl;
        return;
    }
    
    sort(all(arr));
    int count = 1;
    int maxi = -1;
    for(int i=1; i<n; i++){
        if(arr[i]-arr[i-1]<=k) count++;
        else count = 1;
        
        maxi = max(maxi, count);
    }
    cout<<(n-maxi == 0 ? 0 : n-maxi)<<endl;
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