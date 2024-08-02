///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Monday
// Date_of_submission  :- 2024-07-29
// Time_of_submission  :- 22:49:29
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
        cin >> n;
    
        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
    
            cout << (n + 1) - temp << " ";
        }
        cout << endl;
    }
    return 0;
}