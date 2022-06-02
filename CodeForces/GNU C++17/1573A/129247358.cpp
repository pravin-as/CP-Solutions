#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#include <iostream>
#include <string>
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define mod 1000000007





int main()
{
    ll t = 1;
    cin >> t;

    while(t--)
    {


        ll n ,ans = 0;
        cin >> n;

        string str;
        cin >> str;

        vector<ll> arr(n);
        for(ll i = 0 ; i< n ; i++)
        {
            arr[i] = str[i] - '0';

        }

        for(ll i = 0 ; i < n - 1; i++)
        {
            if(arr[i] != 0){
                ans ++;
            }

        }
        for(ll i = 0 ; i< n ; i++){
            ans += arr[i];
        }


        cout << ans << endl;







    }
    return 0;
}

