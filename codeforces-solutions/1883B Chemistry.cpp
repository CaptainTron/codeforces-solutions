///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Thursday
// Date_of_submission  :- 2024-08-01
// Time_of_submission  :- 02:12:39
///////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()


void solve(){
    int n, k;
    cin>>n>>k;
    
    string str;
    cin>>str;
    
    vector<int>freq(26, 0);
    for(auto ch:str) freq[ch-'a']++;
    
    int odd_count = 0;
    for(int i=0; i<26; i++){
        if(freq[i]!=0 && (freq[i]&1)==1) odd_count++;
    }
    if(k<odd_count-1) cout<<"NO";
    else cout<<"YES";
    cout<<endl;
}
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}