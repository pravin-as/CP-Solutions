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
    flash
    ll t = 1;
    //cin >> t;

    while(t--)
    {

        ll n,sum = 0;
        cin >> n;
        vector<ll> x(n);
        for(ll i = 0 ; i< n ; i++)
        {
            cin >> x[i];
            sum += x[i];
        }

        sort(x.begin(),x.end());

        ll m;
        cin >> m;

        while(m--)
        {

            ll a, b,ans=0;
            cin >> a >> b;
            ll fn = upper_bound(x.begin(),x.end(),a) - x.begin();
             //     cout<< "high " << fn << endl;

            if(fn == n)
            {

                ans += a - x[n-1];
                if(b > sum - x[n-1])
                {
                    ans += b - (sum - x[n-1]);
                }

            }
            else if(fn == 0)
            {

                if(b>sum-x[fn])
                {
                    ans += b - (sum-x[fn]);
                }

            }
            else
            {

                ans = min( max( (b - (sum - x[fn])), 0LL), a-x[fn-1]+max( (b - (sum - x[fn - 1])), 0LL)  );



            }
            cout << ans << endl;



            /*   if(sum - x[fn] - b>0)
               {
                   ans += sum - x[fn] - b;
               }
               if(x[fn] - a>0)
               {
                   ans += x[fn] - a;
               }
               cout << ans << endl;
            */






        }




    }
    return 0;
}

