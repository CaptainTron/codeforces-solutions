////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-08-06
// Time_of_submission  :- 23:16:13
// Time_taken          :- 62 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 3
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
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int count = 0;

    if((a>c && b>=d) || (a>=c && b>d)) count++;
    if((a>d && b>=c) || (a>=d && b>c)) count++;
    
    if((b>c && a>=d) || (b>=c && a>d)) count++;
    if((b>d && a>=c) || (b>=d && a>c)) count++;
    
    cout<<count<<endl;
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