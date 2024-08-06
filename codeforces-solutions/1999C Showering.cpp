////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-08-06
// Time_of_submission  :- 23:46:04
// Time_taken          :- 156 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 5
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
    int n, s, m;
    cin>>n>>s>>m;
    
    int end = 0;
    bool flag = 0;
    
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        
        int diff = x - end;
        if(diff>=s) flag = 1;
        
        end = y;
    }
    
    if(m-end>=s) flag = 1;
    
    if(flag) cout<<"YES";
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