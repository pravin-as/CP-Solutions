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
// #define INF (ll)2e18
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
// while(r - l > (double)1e-9){double mid = l + (r - l) / 2.0;if(cond(mid)){ans = mid;l = mid;}else{r = mid;}}  // TTTTFFFF....
// generally check function is O(n) in most problems and mid is the value we are checking in binary search
// a|b = a⊕b + a&b      a⊕(a&b) = (a|b)⊕b       b⊕(a&b) = (a|b)⊕a       (a&b)⊕(a|b) = a⊕b
// a+b = a|b + a&b      a+b = a⊕b + 2(a&b)
// a-b = (a⊕(a&b))-((a|b)⊕a)    a-b = ((a|b)⊕b)-((a|b)⊕a)   a-b = (a⊕(a&b))-(b⊕(a&b))   a-b = ((a|b)⊕b)-(b⊕(a&b))
 
ll power(ll a, ll b){ll ans=1; while(b){if(b&1)ans = (ans*a)%MOD;a = (a*a)%MOD;b>>=1;} return ans;}
ll power1(ll a, ll b){ll ans=1; while(b){if(b&1)ans = (ans*a);a = (a*a);b>>=1;} return ans;}
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
// vector<ll>  dp;
// vector<ll> vis;ll
// vector<vector<char>> mat;
 
 
 

 
 
void solve(){
 
    ll t = 1;
    cin >> t;
 
 
 
    while(t--){
 
 
        ll n, m; cin >> n >> m;

        map<string,vector<ll>> mp;
        vector<vector<ll>> par(m+1), ans;
        vector<ll> dp(m+1);

        for(ll i = 0; i < n; i++){
            string s; cin >> s;
            for(ll j = 0; j <= m - 2; j++){
                mp[s.substr(j,2)] = {j+1,j+2,i+1};
                if(j<m-2){
                    mp[s.substr(j,3)] = {j+1,j+3,i+1};
                }
            }
        }


        string str; cin >> str;

        if(m>1 && mp.find(str.substr(0,2)) != mp.end()){
            dp[1] = 1;
            par[1] = mp[str.substr(0,2)];
            par[1].push_back(2);
        }

        if(m>2 && mp.find(str.substr(0,3)) != mp.end()){
            dp[2] = 1;
            par[2] = mp[str.substr(0,3)];
            par[2].push_back(3);
        }


        for(ll i = 3; i < m; i++){

            if(dp[i-2] == 1 && mp.find(str.substr(i-1,2)) != mp.end()){
                dp[i] = 1;
                par[i] = mp[str.substr(i-1,2)];
                par[i].push_back(2);
            }

            if(dp[i-3] == 1 && mp.find(str.substr(i-2,3)) != mp.end()){
                dp[i] = 1;
                par[i] = mp[str.substr(i-2,3)];
                par[i].push_back(3);
            }


        }

        // debug()
        debug(par)

        if(dp[m-1]==0){
            cout<<-1<<"\n";
        }else{

            ll curr = m - 1;

            while(curr >= 0){
                ans.push_back(par[curr]);
                curr -= par[curr][3];
            }

            reverse(ans.begin(),ans.end());

            cout << sz(ans) << "\n";

            for(auto i: ans){
                cout << i[0] << " " << i[1] << " " << i[2] << "\n";
            }

        }





 
 
    
 
 
 
 
 
 
 
 
 
 
        
         
 
 
 
        // when order does not matter always sort the vector.
        // States in dp may or may not contain index. So first think about whether order is important or just number of objects is important.Also state transition can be like i -> x and x + 1 -> j.
        // min-max means binary search. Sometimes binary search is not direct and it's better to check on which variable binary search should be applied so that checker function is easy to made. when you can't think about anything else think about binary search on answer.
        // In for-loop you can use two variables together in single loop. Also sometimes loop over size of window rather than two varibles (l and r).
        // if the value of some variable is very less like < 20 always think of dp with bitmasking.
        // you can apply n loops using recursion. Steps are calling the function then putting a loop in that function and calling the function again in that loop.
        // Check any condition in recursion when that step actually comes. Don't unnecesary check initially only.
        // sometimes its better to think from back. Also mapping every value from 1 to 10^5 is very helpful.
        // use difference arrays. Expected value and dearrangemts are always dp.
        // check if it is a graph question or a tree question.
        // count the number of subsequences is mostly dp. Always make dp of n+1.
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