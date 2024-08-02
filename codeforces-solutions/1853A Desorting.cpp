///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Sunday
// Date_of_submission  :- 2024-07-28
// Time_of_submission  :- 21:13:53
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
        
        bool sorted = false;
        int min_diff = 1e9;
        vector<ll>arr(n);
        
        for(auto &it:arr) cin>>it;
        int prev = 0;
        
        for(int i=0; i<n; i++){
            int x = arr[i];
            if(i!=0){
                if(x>=prev && x-prev>=0) min_diff = min(min_diff, x-prev);
            }
            if(prev>x){
                sorted = 1;
                break;
            }
            prev = x;
            //cout<<"i "<<i<<" min_diff "<<min_diff<<" ";
        }
            if(min_diff==-1 || sorted == true) cout<<0;
            else if(min_diff==0) cout<<1;
            else if(min_diff&1) cout<<(min_diff+1)/2;
            else cout<<(min_diff/2)+1;
        cout<<endl;
    }
    return 0;
}