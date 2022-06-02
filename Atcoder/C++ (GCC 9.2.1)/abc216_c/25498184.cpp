#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define mod 1000000007



int main()
{
    ll t = 1;
//    cin >> t;

    while(t--)
    {

        ll n;
        cin >> n;
        string str = "";

        while(n>0)
        {

            if(n%2==0)
            {
                n/=2;
                str += "B";
            }
            else
            {
                n--;
                str += "A";
            }


        }
        reverse(str.begin(),str.end());



    cout << str << endl;
    }
    return 0;
}

