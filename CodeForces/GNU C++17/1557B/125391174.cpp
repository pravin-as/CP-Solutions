#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long

ll binarySearch( vector<ll>arr, ll l, ll r, ll x)
{
    if (r >= l)
    {
        ll mid = l + (r - l) / 2;


        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);


        return binarySearch(arr, mid + 1, r, x);
    }


    return -1;
}


int main()
{

    ll t;
    cin >> t ;

    while(t--)
    {

        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        vector<ll> b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        ll ans = 0 ;
        sort(b.begin(),b.end());
        for(int i=0; i<n; i++)
        {
            ll index = lower_bound(b.begin(),b.end(),a[i]) - b.begin(); ;
            bool flag = false;
            while(a[i] == b[index])
            {
                flag = true;
                index++;
                i++;

            }
            if(flag)
            {
                i--;
            }
            ans++;
        }

        cout<<((ans<=k)?"Yes":"No")<<endl;

    }

    return 0;
}
