#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define mod 1000000007
#define INF 1100000000000000000


int main()
{
    flash
    ll t = 1;
   // cin >> t;


    while(t--)
    {

        ll a , b , c , ans=-1;
        cin >> a >> b >> c;

        for(ll i = a ; i<= b ; i++){
            if(i%c==0){
                ans = i;
            }
        }

        cout << ans << "\n";

    }
    return 0;
}
