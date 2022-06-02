//code taken from https://www.geeksforgeeks.org/klees-algorithm-length-union-segments-line/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int segmentUnionLength(const vector<
                       pair <int,int> > &seg)
{
    int n = seg.size();


    vector <pair <int, bool> > points(n * 2);
    for (int i = 0; i < n; i++)
    {
        points[i*2]     = make_pair(seg[i].first, false);
        points[i*2 + 1] = make_pair(seg[i].second, true);
    }


    sort(points.begin(), points.end());

    int result = 0;


    int Counter = 0;


    for (unsigned i=0; i<n*2; i++)
    {

        if (Counter)
            result += (points[i].first -
                       points[i-1].first);


        (points[i].second)? Counter-- : Counter++;
    }
    return result;
}



int main()
{
    int t;
    cin>>t;

    while(t>0)
    {

        ll n, k, f;
        cin>>n>>k>>f;

        vector<pair<int,int>> x;

        for(ll i = 0 ; i < n ; i++)
        {

            ll a,b;
            cin>>a>>b;

            x.push_back({a,b});

        }

        ll res = f -  segmentUnionLength(x);

        if(res >= k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


        t--;
    }


    return 0;
}


