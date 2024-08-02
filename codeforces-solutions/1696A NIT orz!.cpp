///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Saturday
// Date_of_submission  :- 2024-08-03
// Time_of_submission  :- 02:05:51
///////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()



void solve(){
    int n, z;
    cin>>n>>z;
    int maxi = -1;
    
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        
        maxi = max(maxi, tmp|z);
    }
    cout<<maxi<<endl;
}



int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}