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
 
// while(l <= r){ll mid = l + (r - l) / 2;if(check(mid)){ans = mid;l = mid + 1;}else{r = mid - 1;}}
// generally check function is O(n) in most problems and mid is the value we are checking in binary search
ll power(ll a, ll b){ll ans=1; while(b){if(b&1)ans = (ans*a)%MOD;a = (a*a)%MOD;b>>=1;} return ans;}
ll power1(ll a, ll b){ll ans=1; while(b){if(b&1)ans = (ans*a);a = (a*a);b>>=1;} return ans;}
ll dx[] = {1,0,-1,0,1,-1,1,-1};
ll dy[] = {0,1,0,-1,1,1,-1,-1};
string ds = "RLDU";
vector<vector<ll>> adj(5e5+7);
vector<ll> vis(5e5+7);



 
void solve(){
 
    ll t = 1;
    cin >> t;
    
    while(t--){

         

        ll n, a, b; cin >> n >> a >> b;

        vector<ll> A(n), B(n),C;
        for(ll i = 0; i < n; i++){
            B[i] =i+1;
        }

        A[0] = a; 
        A[n/2] = b;
        ll val = n;

        for(ll i = 1; i < n / 2; i++){
            if(val == a || val == b){
                i--;
            }else{
                A[i] = val;
            }
             val--;
        }

        for(ll i = n / 2 + 1; i < n; i++){
            if(val == a || val == b){
                i--;
            }else{
                A[i] = val;
            }
             val--;
        }

        C = A;
        sort(C.begin(),C.end());

        ll mn = a, mx = b;

        for(ll i = 0; i < n / 2; i++){
            mn = min(mn,A[i]);
        }
        for(ll i = n / 2; i < n; i++){
            mx = max(mx,A[i]);
        }
        if(mn == a && mx == b && C == B){
        for(auto i : A){
            cout << i << " ";
        }
        cout << "\n";}else{
            cout << -1 << "\n";
        }






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
 
    // flash
    solve();
  //  cout<<fixed<<setprecision(10)<<mx<<"\n";
  
}