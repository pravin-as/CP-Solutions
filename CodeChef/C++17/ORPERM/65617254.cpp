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
#define INF (ll)2e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
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
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0)n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll dx[] = {1,0,-1,0,1,-1,1,-1};
ll dy[] = {0,1,0,-1,1,1,-1,-1};
// bool isvalid(ll x, ll y){if(x>=1 && x <= n && y >= 1 && y <= m && mat[x][y] != '#' && vis[x][y] == 0){return true;}return false;}
// string ds = "RLDU";
// vector<vector<ll>> adj, adj2;
// map<pair<ll,ll>,ll>  dp;
// vector<ll> vis;







 
void solve(){
 
    ll TC = 1;
    cin >> TC;
 
 
 
    while(TC--){


            ll n, a = 0, b = 0, ans = 0, temp = 1LL; cin >> n;

            vector<ll> A(n), B(n);
            for(ll i = 0; i < n; i++){
                cin >> A[i];
                a = (a | A[i]);
            }
            map<ll,ll> mp;

            for(ll i = 0; i < n; i++){
                cin >> B[i];
                mp[B[i]]++;
                b = (b | B[i]);
            }
            bool flag = true;

            // debug(a)debug(b)

            vector<ll> v;
            // v.push_back(0);

            // while(a != 0 || b != 0){

            //     ll digit_a = a % 2, digit_b = b % 2;

            //     if(digit_a == 1){

            //         if(digit_b == 0){
            //             flag = false;
            //             break;
            //         }else{
            //             ans += 0;  // take or not take both
            //             vector<ll> tm;
            //             for(auto i: v){
            //                 tm.push_back(i + temp);
            //                 tm.push_back(i);
            //             }
            //             v = tm;
            //         }

            //     }else{

            //         if(digit_b == 0){
            //             ans += 0;   // not take
            //             vector<ll> tm;
            //             for(auto i: v){
            //                 tm.push_back(i);
            //             }
            //             v = tm;
            //         }else{
            //             ans += temp;   // take
            //             vector<ll> tm;
            //             for(auto i: v){
            //                 tm.push_back(i + temp);
            //             }
            //             v = tm;
            //         }

            //     }


            //     a /= 2; b /= 2;
            //     temp *= 2;

            // }

            // // debug(v)
            // sort(all(v));

            // v.clear();

            ll divyangana = B[0];
            for(ll i = 0; i < n; i++){
                divyangana = (divyangana & B[i]);
            }

            v.push_back(divyangana);


            bool flag3 = false;

            // debug(v)

            ll p = 0;

            while(p < 1){
                   p++;

                ll j = v[0];
                // debug(j)

                bool flag2 = true;
                map<ll,ll> mp2 = mp, mp3;
                for(auto i: A){
                    if(mp.find((i | j)) == mp.end()){
                        flag2 = false;
                        break;
                    }else{
                        mp[(i | j)]--; mp3[(i | j)]++;
                        if(mp[(i | j)] == 0){
                            mp.erase(mp.find((i | j)));
                        }
                    }
                }
                if(flag2){
                    flag3 = true;
                    ans = j;
                    break;
                }
                for(auto i: mp3){
                    mp[i.ff] += i.ss;
                }
            }

                

            if(!flag3)flag=false;



            if(!flag)ans = -1;



            cout << ans << "\n";
        
        
            
            }
 
 
}
 
 
 
 
 
 
 
 
 
int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
 
     flash
    solve();
  //  cout<<fixed<<setprecision(10)<<mx<<"\n";
  //  divide by 2.0 to prevent precision errors
  
}