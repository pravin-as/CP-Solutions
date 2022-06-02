#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        string s;
        cin>>s;
        int l=s.length();
        bool flag=true;
        for(int i=0;i<l;i++)
        {    flag=true;
             for(int j=0;j<m;j++)
             {
                 if(s[i]==arr[i%n][j])
                 {
                     arr[i%n][j]='0';
                     flag=false;
                     break;
                 }
             }
             if(flag==true)break;
        }
        if(flag==true)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

    }
    return 0;
}