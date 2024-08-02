///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-07-30
// Time_of_submission  :- 21:33:28
///////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str1,str2;
        cin>>str1>>str2;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(str1[i]=='.' or str2[i]=='.'){
                flag=true;
            }
        }
        if(flag==false){
            cout<<0<<endl;
            continue;
        }
        
        int ans=0;
        vector<int> count_current(n+2,0);
        int current = 0;
        for(int i=0;i<n;i++){
            if(str1[i]=='.'){
                current++;
            }
            if(str2[i]=='.'){ 
                current++;
            }
            count_current[i]=current;
        }
        
        for(int i=1;i<n-1;i++){
            int left = count_current[i-1];
            int right = count_current[n-1]-left-2;
            if(str1[i]=='.' and str2[i-1]=='x' and str2[i+1]=='x' and left>0 and right>0 and str2[i]=='.') ans++;
            if(str2[i]=='.' and str1[i-1]=='x' and str1[i+1]=='x' and left>0 and right>0 and str1[i]=='.') ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}