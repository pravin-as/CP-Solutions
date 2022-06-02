// this code is taken from https://www.geeksforgeeks.org/sieve-of-eratosthenes/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define val (ll)1e7+9
ll arr[val];
bool prime[val];
void seive()
{
    for(ll i=0;i<=val;i++)prime[i] = true;
    prime[0]=prime[1]= false;
    for(ll i=2;i*i<=val;i++)
    {
        if(prime[i])
        {
            for(ll j = i*i;j<=val;j+=i)prime[j] = false;
        }
    }
    ll sum = 1;
    arr[0]=arr[1]=0;
    arr[2]=sum;
    sum++;
    arr[3]=arr[4]=2;
    for(ll i=5;i<val;i++)
    {
       if(prime[i])sum++;
       if(i%2==0 && prime[i/2])sum--;
       arr[i] = sum;
    }
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int t;
    cin>>t;
    while(t--)
   {
     ll n;
     cin>>n;
     cout<<arr[n]<<'\n';
   }

  return 0;
}
