#include <bits/stdc++.h>
using namespace std;

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
