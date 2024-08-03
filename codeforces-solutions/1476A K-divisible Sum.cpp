////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Friday
// Date_of_submission  :- 2024-08-02
// Time_of_submission  :- 01:17:10
// Time_taken          :- 62 ms
// Memory_consumed     :- 102400 KB
// Testcase_passed     :- 93
// Status              :- Submitted
////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()



void solve(){
    ll n, k;
    cin>>n>>k;
    
    if(n==1) cout<<k;
    else if(n==k) cout<<1;
    else if(n<k){
        int a = k/n;
        int b = k%n;
        if(b!=0) a++;
        cout<<a;
    }else{
        int c = n/k;
        int d = n%k;
        
        if(d!=0) c++;
        k*=c;
        
        int a = k/n;
        int b = k%n;
        if(b!=0) a++;
        cout<<a;
    }
    cout<<endl;
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