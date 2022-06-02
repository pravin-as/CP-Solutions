#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define ndl '\n'
#define mod 1000000007
void solve()
{
    int n,q;
    cin>>n>>q;
    vector<ll> path[n];
    for(int i=0; i<n-1; i++)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        path[a].push_back(b);
        path[b].push_back(a);
    }
    vector<bool> vis(n,false);
    vector<ll> dis(n,0);


    queue<ll> q1;
    q1.push(0);
    vis[0] = true;
    while(!q1.empty())
    {
        ll val = q1.front();
        q1.pop();
        for(auto x:path[val])
        {
            if(!vis[x])
            {
                q1.push(x);
                dis[x] = dis[val]+1;
                vis[x] = true;
            }
        }

    }
    for(int i=0; i<q; i++)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        if((dis[b]-dis[a])%2)cout<<"Road"<<ndl;
        else cout<<"Town"<<ndl;

    }
}
int main()
{
    auto starttime = high_resolution_clock::now();
    flash
    solve();
    auto endtime = high_resolution_clock::now();
    double duration = duration_cast<microseconds>(endtime - starttime).count();
    duration/=1000000;
    cerr<<"Time Taken : "<<fixed<<setprecision(6)<<duration<<" secs"<<'\n';
    return 0;
}
