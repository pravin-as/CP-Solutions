#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define mod 1000000007



int main()
{
    ll t = 1;
//    cin >> t;

    while(t--)
    {

        vector<pair<string,string>> x;

        ll n;
        cin >> n;

        for(ll i = 0 ; i < n ; i++)
        {
            string a,b;
            cin >> a >> b;
            x.push_back({a,b});
        }

        bool flag = false;

        for(ll i = 0 ; i< n ; i++)
        {
            for (ll j = i + 1 ; j< n; j++)
            {
                if(x[i].first == x[j].first && x[i].second == x[j].second)
            {
                flag = true;
            }
        }
    }

    cout <<( flag ? "Yes": "No") << endl;






    }
    return 0;
}

