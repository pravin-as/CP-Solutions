#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin >> t;
    while(t>0)
    {

        ll n;
        cin >> n;

        vector<pair<ll,ll>> base;
        for(ll i = 0 ; i <n; i++)
        {
            ll mm,mn;
            cin >> mm >> mn;
            base.push_back({mm,mn});
        }

        vector<pair<ll,ll>> x;
        for(ll i = 0 ; i <n; i++)
        {
            x.push_back({base[i].first,base[i].second});
        }
        sort(x.begin(),x.end());


        vector<pair<ll,ll>> y;
        for(ll i = 0 ; i <n; i++)
        {
            y.push_back({base[i].second,base[i].first});
        }
        sort(y.begin(),y.end());


        if(n==1||n==2)
        {
            cout << 0 << endl;
        }
        else
        {

            ll miny[n],miny_b[n],maxy[n],maxy_b[n],
            minx[n],minx_b[n],maxx[n],maxx_b[n];

            minx[0] = x[0].first;
            miny[0] = x[0].second;
            maxx[0] = x[0].first;
            maxy[0] = x[0].second;

            minx_b[n-1] = x[n-1].first;
            miny_b[n-1] = x[n-1].second;
            maxx_b[n-1] = x[n-1].first;
            maxy_b[n-1] = x[n-1].second;

            ll dp[n+1];

            for(ll i = 1 ;  i < n ; i++)
            {

                minx[i] = min(minx[i - 1], x[i].first);
                maxx[i] = max(maxx[i - 1], x[i].first);
                miny[i] = min(miny[i - 1], x[i].second);
                maxy[i] = max(maxy[i - 1], x[i].second);


            }

            for (ll i = n - 2; i >= 0; i--)
            {

                minx_b[i] = min(minx_b[i + 1], x[i].first);
                maxx_b[i] = max(maxx_b[i + 1], x[i].first);
                miny_b[i] = min(miny_b[i + 1], x[i].second);
                maxy_b[i] = max(maxy_b[i + 1], x[i].second);

            }

            for (ll i = 0; i < n - 1; i++)
            {

                dp[i] = (maxx[i] - minx[i]) * (maxy[i] - miny[i])
                        + (maxx_b[i + 1] - minx_b[i + 1]) * (maxy_b[i + 1] - miny_b[i + 1]);

            }


            ll _miny[n],_miny_b[n],_maxy[n],_maxy_b[n],
            _minx[n],_minx_b[n],_maxx[n],_maxx_b[n];

            _minx[0] = y[0].first;
            _miny[0] = y[0].second;
            _maxx[0] = y[0].first;
            _maxy[0] = y[0].second;

            _minx_b[n-1] = y[n-1].first;
            _miny_b[n-1] = y[n-1].second;
            _maxx_b[n-1] = y[n-1].first;
            _maxy_b[n-1] = y[n-1].second;

            ll _dp[n+1];

            for(ll i = 1 ;  i < n ; i++)
            {

                _minx[i] = min(_minx[i - 1], y[i].first);
                _maxx[i] = max(_maxx[i - 1], y[i].first);
                _miny[i] = min(_miny[i - 1], y[i].second);
                _maxy[i] = max(_maxy[i - 1], y[i].second);


            }

            for (ll i = n - 2; i >= 0; i--)
            {

                _minx_b[i] = min(_minx_b[i + 1], y[i].first);
                _maxx_b[i] = max(_maxx_b[i + 1], y[i].first);
                _miny_b[i] = min(_miny_b[i + 1], y[i].second);
                _maxy_b[i] = max(_maxy_b[i + 1], y[i].second);

            }

            for (ll i = 0; i < n - 1; i++)
            {

                _dp[i] = (_maxx[i] - _minx[i]) * (_maxy[i] - _miny[i])
                         + (_maxx_b[i + 1] - _minx_b[i + 1]) * (_maxy_b[i + 1] - _miny_b[i + 1]);

            }


            ll ans = (ll)2e18+7, var = 0;


            for (ll i = 0; i < n - 1; i++)
            {
                var = min(dp[i], _dp[i]);
                ans = min(var, ans);

            }

            cout << ans << endl;


        }

        t--;
    }

    return 0;
}
