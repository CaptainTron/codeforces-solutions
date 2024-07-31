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
        ll n;
        cin>>n;
        
        int number = n;
        int count_digit = 0;
        int first_digit = -1;
        while(n>0){
            int digit = n%10;
            first_digit = digit;
            count_digit++;
            n/=10;
        }
        
        if(number<10) first_digit = 0;
        
        
        if(count_digit>=2) cout<<(((count_digit-1)*9)+first_digit);
        else cout<<number;
        
        cout<<endl;
    }
    return 0;
}