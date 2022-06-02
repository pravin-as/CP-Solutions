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

        ll n, k;
        cin >> n >> k;

        ll A[n];
        for(ll i = 0 ; i < n ; i++)
        {
            cin >> A[i];
        }

        sort(A, A + n);
        reverse(A, A + n);



        ll temp = k, sum = 0, ans = 0;

        for(ll i = 1 ; i <= 2 ; i++)
        {

            ll index = 0;

            while(k>0)
            {

                if(i==2)
                {
                    sum += A[2 * index + 1];

                    if(k==1)
                    {
                        index++;

                        sum += A[2 * index];
                    }

                }
                else
                {
                    sum += A[2 * index];


                }


                index++;
                k--;


            }

            ans = max(ans, sum);
            sum = 0;
            k = temp;
            index = 0;



        }

        cout << ans << endl;


    }

    return 0;
}
