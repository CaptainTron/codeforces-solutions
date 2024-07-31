#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000007
#define all(v) v.begin(),v.end()


void solve(){
    int n, k;
    cin>>n>>k;
    
    if(k==0){
        cout<<0<<endl;
        return;
    }
    int count = 0;
    k-=n;
    if(k<=0){
        cout<<1<<endl;
        return;
    }
    count++;
    bool flag = 0;
    int i = n-1;
    while(i>=2){
        for(int j=1; j<=2; j++){
            k-=i;
            count++;
            if(k<=0){
                flag = 1;
                break;
            }
        }
        if(flag) break;
        i--;
    }
    if(i==1 && k!=0) count+=k;
    cout<<count<<endl;
    return;
}
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}