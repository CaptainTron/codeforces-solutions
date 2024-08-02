///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Tuesday
// Date_of_submission  :- 2024-07-30
// Time_of_submission  :- 18:14:35
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
        
        string str;
        cin>>str;
        
        int i = 0, j = n-1, count = 0;
        while(str[i]!=str[j] && i<j){
            count+=2;
            i++; j--;
        }
        cout<<n-count<<endl;
    }
    return 0;
}