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
    //flash
    ll t = 1;
     cin >> t;

    while(t--)
    {

        string str;
        cin >>str;
        ll n = (ll)str.size(),a=0,b=0,c=0;

        for(ll i = 0;  i< n ; i++){

            if(str[i]=='A'){
                a++;
            }else if(str[i]=='B'){
                b++;
            }else{
                c++;
            }

        }

        cout << (a+c==b?"YES":"NO") << "\n";



    }



    return 0;
}
