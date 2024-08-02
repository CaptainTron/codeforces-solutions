///////////////////////////////////////////////////////
// Author :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Thursday
// Date_of_submission  :- 2024-08-01
// Time_of_submission  :- 18:46:38
///////////////////////////////////////////////////////


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<vector<int>>a(n, vector<int>(m, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    
    if(n==1 && m==1){
        cout<<-1<<endl;
        
    }else{
        
        if(m!=1) {
            for(int i=0; i<n; i++){
                reverse(a[i].begin(), a[i].end());
                if(m&1){
                    int pos = (m/2);
                    swap(a[i][pos], a[i][0]);
                }
            }
        }
        else {
            for(int i=0; i<n/2; i++){
                swap(a[i][0], a[(n-1)-i][0]);
            }
            if(n&1){
                int pos = (n/2);
                swap(a[pos][0], a[0][0]);
            }
        }
        
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}