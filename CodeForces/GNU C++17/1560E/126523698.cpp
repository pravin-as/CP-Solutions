#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define mod 1000000007



int main()
{
    ll t;
    cin>>t;

    while(t--)
    {

        string a,b="",c="";
        cin >> a;
        ll  n = a.size();

        set<char> p;

        reverse(a.begin(), a.end());



        for(ll i = 0 ; i < n ; i++)
        {

            if(p.find(a[i])==p.end())
            {
                b+=a[i];
            }
            p.insert(a[i]);



        }

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());


        map<char,ll> x;

        for(ll i = 0 ; i < n ; i++)
        {

            x[a[i]]++;

        }


        ll cnt = 0;

        ll j = 1;

        for(ll i = 0 ; i < b.size() ; i++)
        {
            cnt += x[b[i]] / j;
            j++;
        }

        for(ll i = 0; i < cnt ; i++)
        {
            c += a[i];
        }






        string c_2 = c, b_2 = "", op = c;
        ll ind = 0;

        while(c.size() != 0)
        {

            c.erase(remove(c.begin(), c.end(), b[ind]),c.end());
            c_2 += c;
            ind++;

        }

        if(c_2==a)
        {
            cout << op << " " << b << endl;
        }
        else
        {
            cout << -1 << endl;
        }



    }




    return 0;
}

