////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Saturday
// Date_of_submission  :- 2024-08-03
// Time_of_submission  :- 18:07:33
// Time_taken          :- 77 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 13
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
    string str;
    cin>>str;
    int len = str.size();
    
    char ch = str[0];
    int count = 0;
    
    loop(i, 0, len){
        if(i==0) continue;
        if(str[i]!=ch){
            if(ch=='0') count++;
            ch = str[i];
        }
        if(count>1){
            count = 2;
            break;
        }
    }
    if(count<2){
        if(ch=='0') count++;
    }
    cout<<count<<endl;
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