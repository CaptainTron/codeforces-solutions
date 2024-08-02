///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Friday
// Date_of_submission  :- 2024-08-02
// Time_of_submission  :- 00:32:23
///////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()



void solve(){
    ll n;
    cin>>n;
    
    ll sum = 0;
    while(n){
        sum+=n;
        n/=2;
    }
    cout<<sum<<endl;
}






int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}