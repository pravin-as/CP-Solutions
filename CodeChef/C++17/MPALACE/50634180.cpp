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
    ll t = 1;

    cin >> t;

    while(t--)
    {

        ll n;
        cin >> n;

        vector<vector<ll>> x(n);
        vector<ll> y(n);

        for(ll i = 0; i < n ; i++)
        {
            ll m, ind=0;
            cin >> m;
            y[i] = m;
            for(ll j = 0 ; j<m; j++)
            {
                ll temp;
                cin >> temp;
                x[i].push_back(temp);
            }
        }



        set<pair<ll,ll>> s;

        for(ll i = 0 ; i < n ; i++)
        {

            s.insert({x[i][0],i});



        }

        vector<ll> cnt(n,0);

        vector<ll> lst;

        while(!(s.size()==0))
        {




            pair<ll,ll> pr = *s.begin();



            ll temp1 = pr.second;
            ll temp2 = pr.first;
            cnt[temp1]++;
            lst.push_back(temp2);
            s.erase(pr);
            if(cnt[temp1]<x[temp1].size())
                s.insert({x[temp1][cnt[temp1]],temp1});






        }

        for(auto u : lst)
        {
            cout << u << " ";
        }

        cout << endl;









    }
    return 0;
}

