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
        
        vector<int>arr(n);
        for(auto &it:arr)cin>>it;
        
        swap(arr[0], arr[1]);
        swap(arr[0], arr[n-1]);
        
        if(arr[0]==arr[1]) cout<<"NO";
        else{
            cout << "YES\n";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}