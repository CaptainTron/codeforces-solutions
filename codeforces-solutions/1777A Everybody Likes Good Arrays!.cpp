///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-07-30
// Time_of_submission  :- 19:43:57
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
        
        vector<int>arr(n);
        for(auto &it:arr)cin>>it;
        
        int count = 0;
        for(int i=1; i<n; i++) if(((arr[i]&1) && (arr[i-1]&1)) || ((arr[i]&1)==0 && (arr[i-1]&1)==0)) count++;
        cout<<count<<endl;
        
    }

    return 0;
}