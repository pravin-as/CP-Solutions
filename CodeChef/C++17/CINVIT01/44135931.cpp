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

      int tc;cin>>tc;while(tc--)
      {
          int n;cin>>n;
          int A[n+1];
          for(int i=1;i<=n;i++)cin>>A[i];
          int B[n+1];
          for(int i=1;i<=n;i++)B[i]=0;
          int count=0;
          for(int i=1;i<=n;i++)
          {
              B[A[i]]=1;
              bool flag=true;
              for(int j=i;j>0;j--)
              {
                  if(B[j]==0)
                  {
                      flag=false;
                      break;
                  }
              }
              if(flag)
                {count++;}

          }
          cout<<count<<'\n';

      }


    return 0;
}
