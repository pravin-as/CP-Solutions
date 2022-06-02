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

        ll n , k;
        cin >> n >> k;

        vector<ll> x(n);
        for(ll i = 0 ; i < n ; i++){
            cin >> x[i];
        }

        sort(x.begin(),x.end());

        for(ll i = n-2 ; i >=n-k-1; i--){
            x[n-1] += x[i];
            
        }

        cout << x[n-1] - (k==0? x[0] :0)<<endl;


    }

    return 0;
}
