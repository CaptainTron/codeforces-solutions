///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Sunday
// Date_of_submission  :- 2024-07-28
// Time_of_submission  :- 21:09:06
///////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()

int main(){
    ll ttest;
    cin>>ttest;
    while(ttest--){
        int n;
        cin>>n;
        n--;
        
        vector<int>b_arr(n+1, 0);
        for(int i=1; i<=n; i++) cin>>b_arr[i];
        
        vector<int>a_arr(n+2, 0);
        
        for(int i=1; i<=n; i++){
            for(int bit=0; bit<30; bit++){
                if((b_arr[i]&(1<<bit))!=0){
                    a_arr[i] |= (1<<bit);
                    a_arr[i+1] |= (1<<bit); 
                }
            }
        }
        
        bool flag = 0;
        for(int i=1; i<=n; i++){
            if(b_arr[i]!= (a_arr[i]&a_arr[i+1])){
                flag = 1;
                break;
            }
        }
        
        if(flag) cout<<-1;
        else {
            for(int i=1; i<=n+1; i++) cout<<a_arr[i]<<" ";
        }
        cout<<endl;
        
        
    }
    return 0;
}