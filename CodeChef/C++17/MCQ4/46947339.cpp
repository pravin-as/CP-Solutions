#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n,k;
    cin >> n >> k;

    int A[n * k],fav[k],happiness[n];
    map<int,int> freq;

    for (int i = 0; i < n * k; i++)
    {
        cin >> A[i];
        freq[A[i]] ++;
    }
    for (int i = 0; i < n ; i++)
    {
        cin >> fav[i];
    }
    for (int i = 0; i <  k; i++)
    {
        cin >> happiness[i];
    }

    int ans = 0;

    for(int i = 0 ; i < n ; i++)
    {

        if(freq[fav[i]] >= k)
        {
            ans += happiness[k-1];
            int var = freq[fav[i]] - k;
            freq.erase(fav[i]);
            freq[fav[i]] = var;
        }
        else if (freq[fav[i]] > 0 && freq[fav[i]] < k)
        {
            ans += happiness[freq[fav[i]] - 1];
            freq.erase(fav[i]);
            freq[fav[i]]  = 0;
        }

    }

    cout << ans << endl;


    return 0;
}


