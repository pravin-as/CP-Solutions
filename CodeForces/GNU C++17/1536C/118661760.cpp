#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t>0)
    {
        map<map<int,int>,int> x;
        int n,d=0,k=0;
        string str;
        cin >> n >> str;

        for(int i = 0; i<n; i++)
        {
            if(str[i]=='D')d++;
            else k++;
            int gc = __gcd(d,k);

            map<int,int> temp;
            temp.insert({d/gc,k/gc});
            cout << x[temp]+1 << " ";
            x[temp]++;


        }

        cout << endl;


        t--;
    }

    return 0;
}
