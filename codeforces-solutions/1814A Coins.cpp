///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Monday
// Date_of_submission  :- 2024-07-29
// Time_of_submission  :- 23:39:11
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
        ll n, k;
        cin >> n >> k;
        
        if(((n&1) && (k&1) && k<=n) || (n&1)==0) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
        
        
    }
    return 0;
}