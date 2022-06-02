#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define mod 1000000007



int main()
{
    ll t = 1;
   // cin>>t;

    while(t--)
    {

       ll n,k,ans=0;
       cin >> n >> k;

       vector<ll> a(n+1) ,  b(n+1) , c(n+1);
       map<ll,ll> pc;

       for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
       }

       for(ll i = 0 ; i < n ; i++){
        if(a[i]%k==0){
            b[i] = pc[a[i]/k];
        }
                pc[a[i]]++;
       }

       map<ll,ll> pc1;

       for(ll i=n-1;i>=0;i--)
    {

        c[i]=pc1[a[i]*k];

        pc1[a[i]]++;
    }

    for(ll i=0;i<=n;i++)
        ans+=b[i]*c[i];
    cout<<ans<<endl;


    }



    return 0;
}

