#include "bits/stdc++.h"
using namespace std;
 
#define MAXN   1000001
#define int long long
 
// stores smallest prime factor for every number
int spf[MAXN];
 
// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
 
// driver program for above function
int32_t main()
{
    sieve();
    int x, num = 1, mx = 0;cin>>x;
 
    vector <int> p = getFactorization(x);
    set<int> s, s1; map<int,int> mp;


    for (int i=0; i<p.size(); i++){
        s.insert(p[i]);mp[p[i]]++;
    }
    for(auto i: s){
        num *= i;
    }
    for(auto i: mp){
        mx = max(mx,i.second);s1.insert(i.second);
    }
    if(mx==0){
        cout << num << " " << 0 << "\n";
        exit(0);
    }
    mx = (ceil(log2((double)mx))) + (((int)(s1.size())!=1)||(ceil(log2((double)mx)))!=(floor(log2((double)mx))));
    cout<<num<<" "<<mx<<"\n";
    // cout<<(log2(num))<<"\n";



    return 0;
}