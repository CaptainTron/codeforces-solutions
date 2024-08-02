///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Friday
// Date_of_submission  :- 2024-08-02
// Time_of_submission  :- 00:20:03
///////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()



void solve(){
    int n = 3, m = 3;
    vector<vector<char>>arr(n, vector<char>(m, 0));
    
    int a = 0, b =0 , c = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            if(arr[i][j]=='A') a++;
            if(arr[i][j]=='B') b++;
            if(arr[i][j]=='C') c++;
        }
    }
    if(a==2) cout<<'A';
    if(b==2) cout<<'B';
    if(c==2) cout<<'C';
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