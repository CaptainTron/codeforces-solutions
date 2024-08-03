////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Wednesday
// Date_of_submission  :- 2024-07-31
// Time_of_submission  :- 19:01:50
// Time_taken          :- 77 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 20
// Status              :- Submitted
////////////////////////////////////////////////////////////////////////////////////////////////////


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


// ------ STAR THIS REPO IF YOU FOUND HELPFUL ---------
// धन्यवाद !