#include <bits/stdc++.h>
using namespace std;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long

int main()
{
    flash

    int t;
    cin>>t;

    while(t--)
    {

        ll n;
        cin>>n;

        if(n%2==0)
        {
            cout<<(n*n)/2<<endl;
        }
        else
        {
            cout<<2*(n/2)*((n/2)+1)<<endl;
        }





    }return 0;

}
