///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-07-30
// Time_of_submission  :- 20:40:19
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
        string s;
        cin>>s;
        int n = s.size();
        string str = "";
        bool flg = 0;
        
        if(n!=1)
            for(int i=0; i<n; i++){
                str+=s[i];
                
                if(s[i]==s[i+1] && flg==0){
                    char ch = s[i];
                    if(ch=='a') str += (ch+1);
                    else str += (ch-1);
                    flg = 1;
                }
            }
        else{
            str+=s[0];
            char ch = s[0];
            if(ch=='a') str += (ch+1);
            else str += (ch-1);
            flg = 1;
        }
        
        if(flg==0){
            char ch = str[n-1];
            if(ch=='a') str += (ch+1);
            else str += (ch-1);
        }
        
        cout<<str;
        cout<<endl;
        
    }
    return 0;
}