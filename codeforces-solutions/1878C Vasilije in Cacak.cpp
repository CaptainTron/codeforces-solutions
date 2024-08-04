////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Sunday
// Date_of_submission  :- 2024-08-04
// Time_of_submission  :- 19:08:52
// Time_taken          :- 77 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 41
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
    ll n, k, x;
    cin>>n>>k>>x;
    
    // calculate high and low for range checking
    // x is less than low or it is higher than high
    ll low = (k*(k+1))/2;
    ll high = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
    if(x>=low && x<=high) cout<<"YES";
    else cout<<"NO";
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