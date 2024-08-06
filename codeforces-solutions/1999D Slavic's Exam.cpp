////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Wednesday
// Date_of_submission  :- 2024-08-07
// Time_of_submission  :- 00:11:45
// Time_taken          :- 46 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 12
// Status              :- Submitted
////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()



void solve(){
    string str1, str2;
    cin>>str1>>str2;
    
    int n = str1.size(), m = str2.size();
    
    int i = 0, j = 0;
    while(i<n && j<m){
        if(str1[i]=='?')
            str1[i]=str2[j];
            
        if(str1[i]==str2[j]){
            j++;
        }
        i++;
    }
    
    for(auto &it:str1){
        if(it=='?') it='a';
    }
    
    if(j==m){
        cout<<"YES"<<endl;
        cout<<str1;
    }else{
        cout<<"NO";
    }
    cout<<endl;
    
}



int main(){
    IOS;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


// ------ STAR THIS REPO IF YOU FOUND HELPFUL ---------
// धन्यवाद !