///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Saturday
// Date_of_submission  :- 2024-08-03
// Time_of_submission  :- 01:54:07
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
    
    ll x = 0;
    vector<ll>arr(n);
    for(auto &it:arr) cin>>it;
    
    for(ll i=0; i<n; i++){
        x = 0;
        for(ll j=0; j<n; j++){
            if(i!=j){
                x^=arr[j];
            }
        }
        if(arr[i]==x){
            cout<<x<<endl;
            return;
        }
    }
}






int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}