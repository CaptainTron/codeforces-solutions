////////////////////////////////////////////////////////////////////////////////////////////////////
// Author              :- Vaibhav Yadav (https://www.linkedin.com/in/vaibhav-yadav-4397351b9/)
// Day_of_submission   :- Saturday
// Date_of_submission  :- 2024-08-03
// Time_of_submission  :- 02:57:10
// Time_taken          :- 109 ms
// Memory_consumed     :- 0 KB
// Testcase_passed     :- 24
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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    bool only_odd = true;
    bool only_even = true;
    ll even = 0, odd = 0;
    loop(i, 0, n)
    {
        cin >> arr[i];
        if (arr[i] % 2)
        {
            only_even = false;
            odd++;
        }
        else
        {
            only_odd = false;
            even++;
        }
    }
    if (only_odd)
    {
        cout << "0\n";
        return;
    }
    if (odd != 0) // mixed evven and odd
    {
        cout << n - odd << endl;
        return;
    }
    ll mini = LONG_MAX;
    loop(i, 0, n)
    {
        ll x = 0;
        while (arr[i] % 2 == 0) 
        {
            arr[i] /= 2;
            x++;
        }
        arr[i] = x;
        mini = min(x,mini);
    }
    cout <<  mini+even-1 << endl;
    
}



int main(){
    IOS;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


// ------ STAR THIS REPO IF YOU FOUND HELPFUL ---------
// धन्यवाद !