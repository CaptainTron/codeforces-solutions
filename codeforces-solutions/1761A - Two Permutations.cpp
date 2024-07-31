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
        int n, a, b;
        cin>>n>>a>>b;
        
        if((a+b)<=n-2 || (a==n && b==n)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}