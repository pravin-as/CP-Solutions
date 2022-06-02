#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define mod 1e9 + 7



int main()
{

    ll q;
    cin >> q;
    multiset <ll, less <ll>> x;
    ll d = 0;
    while(q--)
    {

        ll a;
        cin >> a;

        if(a==3)
        {
            cout<<*x.begin()+d<<endl;
            x.erase(x.begin());
        }
        else
        {
            ll b;
            cin >> b;
            if(a==1)
            {
                x.insert(b-d);
            }
            else
            {
                d+=b;
            }

        }



    }

    return 0;
}
