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
        int a[n];
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i] == 2;
        }
        
        bool flag = 0;
        ll total = 0, index = -1;
        for(int i=0; i<n; i++){
            total += a[i] == 2;
            if(total == sum - total){
                flag = 1;
                index = i+1;
                break;
            }
        }
        
        if(flag)cout<<index;
        else cout<<-1;
        cout<<endl;
        
    }
    return 0;
}