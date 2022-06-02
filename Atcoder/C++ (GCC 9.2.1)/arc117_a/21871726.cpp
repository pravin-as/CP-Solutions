#include <bits/stdc++.h>
using namespace std;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long

int main()
{
    flash


    ll a,b,sum1=0,sum2=0,temp=0;
    cin>>a>>b;

    if(a>b)
    {

        for(int i = 1 ; i<= a; i++)
        {
            sum1+=i;
            cout<<i<<" ";
        }

        for(int i = 1 ; i<b; i++)
        {
            sum2+=i;
            cout<<-i<<" ";

        }
        cout<<sum2-sum1<<" ";

    }
    else if(a<b)
    {

        for(int i = 1 ; i<= b; i++)
        {
            sum1+=i;
            cout<<-i<<" ";
        }

        for(int i = 1 ; i<a; i++)
        {
            sum2+=i;
            cout<<i<<" ";

        }
        cout<<sum1-sum2<<" ";

    }
    else
    {

        for(int i = 1 ; i<= a; i++)
        {

            cout<<i<<" ";
        }

        for(int i = 1 ; i<=a; i++)
        {

            cout<<-i<<" ";

        }



    }





    return 0;

}
