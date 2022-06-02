#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {

        ll n, m;
        cin >> n >> m;


        vector<string> a;
        vector<string> b;

        for(ll i = 0 ; i < n ; i++)
        {
            string str;
            cin >> str;
            a.push_back(str);
        }

        for(ll j =  0; j < m ; j++)
        {
            string str = "" ;
            for(ll i = 0 ; i < n ; i++)
            {
                str += a[i][j];
            }
            b.push_back(str);


        }

        vector<string> c;
        vector<string> d;

        for(ll i = 0 ; i < n-1 ; i++)
        {
            string str;
            cin >> str;
            c.push_back(str);
        }

        for(ll j =  0; j < m ; j++)
        {
            string str = "" ;
            for(ll i = 0 ; i < n-1 ; i++)
            {
                str += c[i][j];
            }
            d.push_back(str);

        }

        for(ll i=0; i<m; i++)
        {
            sort(b[i].begin(),b[i].end());
            sort(d[i].begin(),d[i].end());
        }

        string ans = "";

        for(ll i = 0 ; i < m; i++)
        {
            for(ll j = 0 ; j < n ; j++)
            {
                if(b[i][j]!=d[i][j])
                {
                    ans += b[i][j];
                    break;
                }
                else if(j==n-1)
                {
                    ans += b[i][j];
                }
            }
        }

        cout << ans << endl;

    }

    return 0;
}
