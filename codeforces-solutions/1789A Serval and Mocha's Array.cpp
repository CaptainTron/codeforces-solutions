///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-07-30
// Time_of_submission  :- 18:40:25
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
        
        bool flag = 0;
        vector<int>arr(n);
        for(auto &it:arr) cin>>it;
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(arr[i], arr[j])==1 || __gcd(arr[i], arr[j])==2){
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) cout<<"YES";
        else cout<<"NO";
        
        cout<<endl;
        
    }
    return 0;
}