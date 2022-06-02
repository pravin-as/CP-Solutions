//This code is written by प्रविण शंखपाळ 


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((ll)(x).size())
#define all(x) (x).begin(), (x).end()
#define srt(x) sort(x.begin(),x.end())


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

ll power(ll a, ll b){ll ans=1; while(b){if(b&1)ans = (ans*a)%MOD;a = (a*a)%MOD;b>>=1;} return ans;}
ll power1(ll a, ll b){ll ans=1; while(b){if(b&1)ans = (ans*a);a = (a*a);b>>=1;} return ans;}


vector<ll> Factors(int n)
{
    vector<ll> temp;

    ll i;
    for (i = 1; i * i < n; i++) {
        if (n % i == 0)
            temp.push_back(i);
    }
    if (i - (n / i) == 1) {
        i--;
    }
    for (; i >= 1; i--) {
        if (n % i == 0)
            temp.push_back(n/i);
    }
    return temp;
}

void solve(){

    // use brackets for binary operations.

    ll t=1;
    cin >> t;

    while(t--){ 

        ll n;
        cin >> n;

        vector<ll> A(n);
        for(ll i = 0 ; i < n ; i++ ){
            cin >> A[i];
        }

        sort(A.begin(),A.end());

    //    debug(A)

        map<ll,ll> freq;
        for(ll i = 0 ; i < n ; i++){
            freq[A[i]]++;
        }

        ll max_freq = 0LL;

        for(auto i : freq){
            max_freq = max(max_freq,(ll)i.ss);
        }

        if(max_freq>=n/2){
            cout << -1 << "\n";

        }else{

        ll ans = 0;

        debug(A)

        for(ll i = 0 ; i < n ; i++){
            for(ll j = i + 1 ; j < n ; j++){


                ll diff = A[j] - A[i];
             //   debug(diff)
                if(diff!=0){
                vector<ll> factors = Factors(diff);
             
                
                for(ll fac : factors){
                    vector<ll> temp;
                    for(ll k = 0 ; k < n ; k++){
                        temp.push_back(((A[k])%fac+fac)%fac);
                    }
                     

                    map<ll,ll> mp;
                    for(ll k = 0 ;k < n ; k++){
                        mp[temp[k]]++;
                    }
                    // debug(temp)
                    // debug(mp)
                    debug(fac)
                    ll mx = 0;
                    for(auto k : mp){
                        mx = max(mx,(ll)k.ss);
                    }
                    
                    if(mx>=n/2LL){
                        ans = max(ans,fac);
                    }

                }
            }
            }
        }

            debug(ans)

        cout << ans << "\n";


    }

        

       

        



    }
        }
    


int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    flash
    solve();
  //  cout<<fixed<<setprecision(10)<<mx<<"\n";

}
