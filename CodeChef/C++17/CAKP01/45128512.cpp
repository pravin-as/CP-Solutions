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

        string s;
        cin>>s;
        ll n  =s.size();
        sort(s.begin(),s.end());
        ll count = 0;

        ll a = std::stol(s);

        if(a%7==0)
        {
            count++;
        }


        while(next_permutation(s.begin(),s.end()))
        {

            a = std::stol(s);

            if((a)%7==0)
            {
                count++;
            }


        }

        cout<<count<<endl;

    }


    return 0;
}

