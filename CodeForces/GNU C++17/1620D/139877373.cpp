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
#define INF 2e18
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
 
// while(l <= r){ll mid = l + (r - l) / 2;if(check(mid)){ans = mid;l = mid + 1;}else{r = mid - 1;}}    // TTTTFFFF....
//while(r - l > (double)1e-9){double mid = l + (r - l) / 2.0;if(cond(mid)){ans = mid;l = mid;}else{r = mid;}}  // TTTTFFFF....
// generally check function is O(n) in most problems and mid is the value we are checking in binary search
ll power(ll a, ll b){ll ans=1; while(b){if(b&1)ans = (ans*a)%MOD;a = (a*a)%MOD;b>>=1;} return ans;}
ll power1(ll a, ll b){ll ans=1; while(b){if(b&1)ans = (ans*a);a = (a*a);b>>=1;} return ans;}
ll dx[] = {1,0,-1,0,1,-1,1,-1};
ll dy[] = {0,1,0,-1,1,1,-1,-1};
string ds = "RLDU";
vector<vector<ll>> adj(5e5+7), adj2(5e5+7);
vector<ll> vis(5e5+7,0LL), dp(5e5+7,0LL);
vector<vector<char>> mat(5e5+7);


 
void solve(){
 
    ll t = 1;
    cin >> t;
    
    while(t--){
 
    
        ll n, threes = 0, ans = INF; cin >> n;
        vector<ll> A(n);
        for(ll i = 0; i < n; i++){
            cin >> A[i];
            threes = max(threes,A[i]/3);
        }

        for(ll ones = 0; ones <= 2; ones++){
            for(ll two = 0; two <= 2; two++){
                for(ll three = max(0LL,threes-4); three <= threes; three++){
                    ll coins = ones + two + three;
                    bool flag1 = false;
                    for(ll i = 0; i < n; i++){
                        bool flag2 = false;
                        for(ll x = 0; x <= ones; x++){
                            for(ll y = 0; y <= two; y++){
                                ll temp = A[i] - x - 2 * y;
                                if(temp >= 0 && temp % 3 ==0 && temp / 3 <= three){
                                    flag2 = true;
                                }
                            }
                        }
                        if(flag2==false)flag1=true;
                    }
                    if(flag1==false)ans=min(ans,coins);
                }
            }
        }

        cout << ans << "\n";


 



        // sometimes its better to think from back. Also mapping every value from 1 to 10^5 is very helpful.
        // use difference arrays.
        // check if it is a graph question or a tree question.
        // count the number of subsequences is mostly dp. Always make dp of n+1.
        // when you can't think about anything else think about binary search on answer.
        // use brackets for binary operations.
        // use .lower_bound()
        // __lg for log
        // Think about all data structures first and which will be easy
        // to implement. vector, set, multiset, unordered_set, ordered_set(pbds),
        // map, multimap, unordered_map(custom hashing), Queue, priority_queue, stack.
        // Always define vector in global if passing in case of bfs, dfs specifically.
        
        
            
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