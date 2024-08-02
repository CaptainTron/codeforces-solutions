///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Monday
// Date_of_submission  :- 2024-07-29
// Time_of_submission  :- 23:21:13
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
        vector<int>arr(n);
        for(auto &it:arr) cin>>it;
    
        int left = -1, right = 0;
        int oneIndex = -2;
        int maxi = 0;
        
        while(right<n){
            if(left==-1 && arr[right]==0) left = right;
            if(arr[right]==1) oneIndex = right;
            
            if(left<=oneIndex) left++;
            if(left>oneIndex) maxi = max(maxi, (right-left+1));
            right++;
        }
        cout<<maxi<<endl;
    }
    return 0;
}