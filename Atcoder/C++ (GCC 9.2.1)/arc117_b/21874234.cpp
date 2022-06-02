#include <bits/stdc++.h>
using namespace std;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define mod (long)1e9+7

int main()
{
    flash

    ll n;
    cin>>n;

    vector<long> a(n);

    for(ll i = 0 ; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    ll ans = a[0]+1;

    for(ll i = 0 ; i<n-1 ; i++)
    {

        ans *= a[i+1] - a[i] +1 ;
        ans%=mod;

    }

    cout<<ans<<endl;

    return 0;

}
