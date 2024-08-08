////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Thursday
// Date_of_submission  :- 2024-08-08
// Time_of_submission  :- 11:24:38
// Time_taken          :- 62 ms
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
    int n;
    cin>>n;
    
    int prev = -1;
    int maxi=-1, mini = 1e9;
    loop(i, 0, n){
        int x;
        cin>>x;
        if(i!=0){
            mini = min(mini, max(x, prev));
        }
        prev = x;
    }
    cout<<mini-1<<endl;
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