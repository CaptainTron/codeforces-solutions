///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-07-30
// Time_of_submission  :- 00:07:07
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
        ll a, b, c, d;
        cin >>a>>b>>c>>d;
        
        if(b>d || (c-a)>(d-b)) cout<<"-1";
        else cout<<(a-c)+2*(d-b);
        cout<<endl;
        
        
    }
    return 0;
}