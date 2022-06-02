#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long


int main()
{

    ll t;
    cin >> t;

    while(t--)
    {

       ll n;
       cin >> n;
       ll k = n;
       
       cout << 2 << endl;


       for(ll i = n-1 ; i >= 1 ; i--){
            cout << k << " " << i << endl;
            k = (k+i+1)/2;
       }


    }

    return 0;
}
