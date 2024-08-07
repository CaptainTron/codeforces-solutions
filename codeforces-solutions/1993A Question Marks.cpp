////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Wednesday
// Date_of_submission  :- 2024-08-07
// Time_of_submission  :- 14:19:56
// Time_taken          :- 62 ms
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
    int n;
    cin>>n;
    
    string str;
    cin>>str;
    
    int a = 0, b = 0, c = 0, d = 0;
    for(auto it:str){
        if(it=='A') a++;
        if(it=='B') b++;
        if(it=='C') c++;
        if(it=='D') d++;
    }
    int count = 0;
    if(a>=n) count+=n;
    else if(a<=n) count+=a;
    
    if(b>=n) count+=n;
    else if(b<=n) count+=b;
    
    if(c>=n) count+=n;
    else if(c<=n) count+=c;
    
    if(d>=n) count+=n;
    else if(d<=n) count+=d;
    
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