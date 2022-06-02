#include <bits/stdc++.h>
using namespace std;

 
int main()
{
    int n; cin >> n;
    vector<int> A(n);
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        mp[A[i]] = i;
    }
    int cnt = 1, ans = 1;
    for(int i = 2; i <= n; i++){
        if(mp[i]>mp[i-1]){cnt++;}else{cnt=1;}
        ans = max(cnt,ans);

    }
    cout << n - ans << "\n";



    return 0;
}