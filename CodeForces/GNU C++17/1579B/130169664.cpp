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

        ll n,ind=0,index=0;
        cin >> n;
        vector<ll> A(n),B(n),C,D,E,F(n);
        for(ll i = 0 ; i < n ; i++)
        {
            cin >> A[i];
            B[i] = A[i];
            F[i] = A[i];
        }

        sort(B.begin(),B.end());

           while(false){

                   ll cnt = 1;

               for(ll i = 1;  i< n ; i++){
                   if(A[i] < A[i-1]){

                       cnt ++;

                   }else{

                       if(cnt>0){

                        //   C.push_back(i-cnt);
                        //   D.push_back(i-1);
                        //   E.push_back(cnt - 1);

                           for(ll j = i-cnt; j<=i-1;j++){
                               F[j] = F[i-cnt];
                           }

                       }


                       cnt=0;

                   }
               }}

        for(ll i=0; i<n; i++)
        {
            ll temp1;
            for(ll op=i; op<n; op++)
            {
                if(A[op] == B[i])
                {
                    temp1 = op;
                    break;
                }
            }
            if(i !=temp1 )
            {
                C.push_back(i+1);
                D.push_back(temp1+1);
                ll temp = A[i];
                A[i] = A[temp1];
                for(ll op=i+1; op<=temp1; op++)
                {
                    ll temp2 = A[op];
                    A[op] = temp;
                    temp = temp2;
                }

            }
        }

        cout << C.size() << "\n";

        for(ll i = 0 ; i< (ll) C.size() ; i++)
        {
            cout << C[i] << " " << D[i] << " " << D[i] - C[i] << "\n";
        }






    }



    return 0;
}
