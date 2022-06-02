#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#include <iostream>
#include <string>
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define mod 1000000007
const long long INF = 1100000000000000000;


int main()
{
    flash
    ll t = 1;
    cin >> t;

    while(t--)
    {

        ll n;
        cin >> n;

        vector<ll> A(n);
        for(ll i = 0; i<n; i++)
        {
            cin >> A[i];
        }

        deque <ll> ans;
        ans.push_front(A[0]);

        for(ll i = 1 ; i< n ; i++)
        {
            if((ll)ans.front()>=A[i])
            {
                ans.push_front(A[i]);
            }
            else
            {
                ans.push_back(A[i]);
            }
        }

        deque <ll> :: iterator it;
        for (it = ans.begin(); it != ans.end(); ++it)
            cout << *it << " ";
        cout << "\n";



    }



    return 0;
}
