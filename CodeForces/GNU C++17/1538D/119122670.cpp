#include <bits/stdc++.h>
using namespace std;
#define ll int

vector<vector<ll>> x;
ll cnt =0;

ll primeFactors(ll n)
{

    vector<ll> x;

    while (n % 2 == 0)
    {
        x.push_back(2);
        n = n/2;
    }


    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            x.push_back(i);
            n = n/i;
        }
    }


    if (n > 2)
        x.push_back(n);

    return x.size();
}





int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin >> t;
    while(t>0)
    {

        ll a,b,k;
        cin >> a >> b >> k;

        if (a == 1 && b == 1)
        {
            cout << "NO" << endl;
        }
        else if (k == 1)
        {
            if (a != b && (a % b == 0 || b % a == 0))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << (k <= primeFactors(a) + primeFactors(b) ? "YES" : "NO") << endl;
        }


        t--;
    }

    return 0;
}
