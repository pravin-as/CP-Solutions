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

        ll n , sum = 0 , rem=0,ind=0;
        cin >> n;
        vector<ll> A(n);
        for(ll i = 0; i< n ; i++){
            cin >> A[i];
            sum+= A[i];
        }
        ll x;
        cin >> x;
       ll r = x%sum;
        for (ll i = 0; i < n; i++){
    r -= A[i];
    ind++;
    if (r < 0){
      break;
    }
  }



        if(x%sum==0){
            cout << n * (x / sum) + ind << "\n";
        }else{

            cout << n * (x / sum) +  ind << "\n";
        }



    }
    return 0;
}




