#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long


int main()
{

    ll t;
    cin >> t;

    while(t--)
    {

        ll n;
        cin >> n;
        bool flag = false;
        ll a,b,c=0;

        for(ll i = 0 ; i <= 400 ; i++)
        {
            for(ll j = 0 ; j <= 200 ; j++)
            {

                if(3*i + 5* j == n)
                {
                    flag = true;
                    a = i;
                    b = j;
                    c = 0;
                    break;

                }
            }
        }

        if(n==7)
        {
            cout << 0 << " "<< 0 <<" "<<  1<<endl;
        }else

        if(flag)
        {
            cout << a << " " << b << " " << c <<endl;
        }
        else
        {
            cout << -1 << endl;
        }

    }

    return 0;
}
