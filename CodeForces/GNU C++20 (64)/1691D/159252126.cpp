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




class SegTree{
public:
    vector<ll> seg;
    vector<ll> a;
    int n; 
    SegTree(vector<ll> v){
        a = v;
        n = v.size();
        seg.resize(4*n);
        build(0,0,n-1);
    }
void build(ll ind,ll start,ll end){
    if(start == end){
        seg[ind] = a[start];
        return; 
    }
    ll mid = (start+end)>>1;
    build(2*ind+1,start,mid);
    build(2*ind+2,mid+1,end);
    seg[ind] = max(seg[2*ind+1],seg[2*ind+2]); // operation may change
}
ll query(ll ind,ll left, ll right, ll start,ll end){
    if(left<=start && right>=end){
        return seg[ind];
    }
    else if(left>end || right<start)return -INF;
    else {
        ll mid = (start+end) >> 1;
        return max(query(2*ind+1,left,right,start,mid) , query(2*ind+2,left,right,mid+1,end));// operation may change
 
    }
}
void update(ll ind,ll i,ll k,ll start, ll end){
   if(start == end){
    seg[ind] = k;
    return ;
   }
   ll mid = (start+end) >> 1;
   if(i<=mid){
    update(2*ind+1,i,k,start,mid);
   }
   else{
    update(2*ind+2,i,k,mid+1,end);
   }
   seg[ind] = max(seg[2*ind+1],seg[2*ind+2]); // operation may change
}
};

 
void solve(){
 
    ll TC = 1;
    cin >> TC;
 
 
 
    while(TC--){


            ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a)cin>>x; 
    vector<ll> prefix(n),suffix(n);
    prefix[0] = a[0];
    for(int i=1;i<n;i++)prefix[i] = prefix[i-1] + a[i];
    suffix[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--)suffix[i] = suffix[i+1] + a[i];
    SegTree P(prefix),S(suffix);
    bool ok = 1; 
    vector<ll> ng(n,n),pg(n,-1);
    stack<ll> s; 
    for(int i=0;i<n;i++){
        while(!s.empty() && a[s.top()] < a[i]){
            ng[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())s.pop();
 
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && a[s.top()] < a[i]){
            pg[s.top()] = i; 
            s.pop();
        }
        s.push(i);
    }
    for(int i=0;i<n;i++){
         ll right = P.query(0,i+1,ng[i]-1,0,n-1) - prefix[i];
         ll left = S.query(0,pg[i]+1,i-1,0,n-1) - suffix[i];
         //cout<<i<<" "<<right<<" "<<left<<ndl;
         if(max(left,right) > 0){
            ok = 0;
            break;
         }
    }
 
    cout<<(ok?"YES":"NO")<<endl;
        
        
            
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