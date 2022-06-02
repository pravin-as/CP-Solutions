#include <bits/stdc++.h>
using namespace std;

int lcs(char* X, char* Y, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return 1 + lcs(X, Y, m - 1, n - 1);
    else
        return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n));
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int n;cin>>n;
    map<int ,vector<int>> hifi;
    int a =0;
    int b =0;
    int count =0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        hifi[a].push_back(b);
    }
    for(auto &x:hifi)
    {   int p=0;
        int q =0;
        for(auto &i:x.second)
        {
           if(i==0)p++;
           if(i==1)q++;
        }
        if(q>=p){count+=x.first*q;}
        else {count+=(-x.first)*p;}
    }
     cout<<count<<'\n';
    return 0;
}
