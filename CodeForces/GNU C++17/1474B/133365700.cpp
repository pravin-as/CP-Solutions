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

 bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
vector<ll> printPrime(ll n)
{

    vector<ll> temp;
    for (ll i = 2; i <= n; i++) {
        if (isPrime(i))
            temp.push_back(i);
    }

    return temp;
}

void solve(){

    // use brackets for binary operations.
    // use .lower_bound()

    ll t=1;
    cin >> t;

    vector<ll> fi,p;

    fi.push_back(1);

    p = printPrime(2e6);

    for(auto i : p){
        fi.push_back(i);
    }


    while(t--){

        
            ll n, cnt = 0LL, i=0, ans=0,ans2=0;
            cin >> n;

            while(cnt<n){
                cnt+=fi[i+1]-fi[i];
                if(cnt>=n){
                    ans = fi[i+1];
                    i++;
                    break;
                }

                i++;

            }
            debug(i)
            debug(ans)
            cnt = 0;

            while(cnt<n){
                cnt+=fi[i+1]-fi[i];
                if(cnt>=n){
                    ans2 = fi[i+1];
                   
                    break;
                }
                i++;
            }
            debug(i)

             debug(ans2)

            cout << (ans*ans2) << "\n";
            





    }


       



}



int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    flash
    solve();
  //  cout<<fixed<<setprecision(10)<<mx<<"\n";
  // __lg for log
}