////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Saturday
// Date_of_submission  :- 2024-08-03
// Time_of_submission  :- 17:18:22
// Time_taken          :- 154 ms
// Memory_consumed     :- 102400 KB
// Testcase_passed     :- 54
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
    
    sort(str.begin(), str.end());
    char x = str[str.length()-1];
    
    string res = "";
    for(char ch:str){
        if(ch==x) res+=ch;
    }
    cout<<res;
}



int main(){
    IOS;
    //ll t;
   // cin>>t;
    //while(t--){
        solve();
    //}
    return 0;
}


// ------ STAR THIS REPO IF YOU FOUND HELPFUL ---------
// धन्यवाद !