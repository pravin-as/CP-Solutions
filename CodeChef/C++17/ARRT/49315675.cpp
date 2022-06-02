#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define mod 1e9 + 7
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i = 0 ; i <n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b(n);
        for(ll i = 0 ; i <n; i++)
        {
            cin >> b[i];
        }
        vector<pair<ll,ll>> x(n);
        ll mn = mod;
        for(ll i = 0 ; i < n; i++)
        {
            x[i] = {(a[0] + b[i])%n,i};
            mn = min(mn,x[i].first);
        }
        sort(x.begin(),x.end());

        vector<vector<ll>> c;
        for(auto [p,q]:x)
        {
            if(mn == p)
            {
                vector<ll> d(n);
                for(ll i=0; i<n; i++)
                {
                    d[i] = (a[i]+b[(q+i)%n])%n;
                }
                c.push_back(d);
            }
            else
            {
                break;
            }
        }
        sort(c.begin(),c.end());
        for(int i=0; i<n; i++)
        {
            cout<<c[0][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
