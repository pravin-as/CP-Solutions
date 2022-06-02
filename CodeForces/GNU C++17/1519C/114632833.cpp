#include <bits/stdc++.h>
using namespace std;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long

ll ans[(ll)2e5+1];

void fun(vector <ll> v)
{

    sort(v.begin(),v.end());

    ll n=v.size();
    ll cp[n+1];
    cp[0]=0;
    for(ll i=0; i<n; i++)
    {
        cp[i+1]=cp[i]+v[i];
    }
    for(ll i=1; i<=n; i++)
    {
        ans[i]+=cp[n]-cp[n%i];
    }

}


int main()
{
    flash
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector <ll> v[n];
        ll a[n],b[n];
        for(ll i=1; i<=n; ++i)
        {
            ans[i]=0;
        }

        for(ll i=0; i<n; ++i)
        {
            cin>>a[i];
            a[i]--;

        }
        for(ll i=0; i<n; ++i)
        {
            cin>>b[i];
            v[a[i]].push_back(b[i]);

        }
        for(ll i=0; i<n; ++i)
        {
            if(!v[i].empty())
            {

                fun(v[i]);
            }
        }

        for(ll i=1; i<=n; ++i) cout<<ans[i]<<' ';
        cout<<endl;
    }
    return 0;
}


