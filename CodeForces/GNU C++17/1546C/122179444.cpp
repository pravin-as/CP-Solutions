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

        ll n;
        cin >> n;
        vector<ll> A(n);

        for(ll i = 0 ; i <n; i++)
        {
            cin >> A[i];
        }

        map<int,vector<int>> x;

        for(int i = 0 ;  i<n; i++)
        {
            x[A[i]].push_back(i);
        }

        map<int,int> odd,even;


        for(auto i : x)
        {
            for(int j : i.second)
            {
                if(j%2==0)
                {
                    even[i.first]++;
                }
                else
                {
                    odd[i.first]++;
                }
            }
        }



        sort(A.begin(),A.end());

        map<int,vector<int>> y;

        for(int i = 0 ;  i<n; i++)
        {
            y[A[i]].push_back(i);
        }

        map<int,int> odd1,even1;


        for(auto i : y)
        {
            for(int j : i.second)
            {
                if(j%2==0)
                {
                    even1[i.first]++;
                }
                else
                {
                    odd1[i.first]++;
                }
            }
        }



        bool flag = 1;

        for(int i : A)
        {
            if(odd[i]!=odd1[i]||even[i]!=even1[i])
            {
                flag = 0;
                break;
            }
        }

        cout << (flag?"YES":"NO") << endl;
    }
    return 0;
}
