///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-07-30
// Time_of_submission  :- 01:11:58
///////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        ll ans = 0;
        for(ll i=0; i<n; i++){
            int x;
            cin>>x;
            ans^=x;
        }
        
        if((n&1)==0){
            if(ans==0) cout<<0;
            else cout<<"-1";
        }else cout<<ans;
        cout<<endl;
    }
    return 0;
}