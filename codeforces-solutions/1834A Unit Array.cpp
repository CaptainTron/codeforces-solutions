///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Monday
// Date_of_submission  :- 2024-07-29
// Time_of_submission  :- 22:14:55
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
        int n;
        cin>>n;
        
        int pos = 0, neg = 0;
        int x;
        for(int i=0; i<n; i++){
            cin>>x;
            if(x<0) neg++;
            else pos++;
        }
        int ans = 0;
        while (!((pos - neg) >= 0 and neg % 2 == 0))
        {
            neg--;
            pos++;
            ans++;
        }
        cout << ans <<endl;
    }
    return 0;
}