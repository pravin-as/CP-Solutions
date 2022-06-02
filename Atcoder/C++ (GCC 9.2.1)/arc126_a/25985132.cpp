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


        ll n2, n3, n4, ans = 0;
        cin >> n2 >> n3 >> n4;

        ll temp1 = min(n3/2,n4);
        ans += temp1;
        n3 -= temp1 * 2;
        n4 -= temp1 * 1;

        ll temp2 = min(n4/2,n2);
        ans += temp2;
        n4 -= temp2 * 2;
        n2 -= temp2 * 1;

        ll temp3 = min(n3/2, n2/2);
        ans += temp3;
        n3 -= temp3 * 2;
        n2 -= temp3 * 2;

        ll temp4 = min(n4, n2 / 3);
        ans += temp4;
        n4 -= temp4;
        n2 -= temp4 * 3;


        ans += n2 / 5;
        n2 -= ( n2 /5 ) * 5;

        cout << ans << endl;



    }
    return 0;
}

