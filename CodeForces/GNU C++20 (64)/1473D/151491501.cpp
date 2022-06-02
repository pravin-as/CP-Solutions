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
 
// while(l <= r){ll mid = l + (r - l) / 2;if(check(mid)){ans = mid;l = mid + 1;}else{r = mid - 1;}}    // TTTTFFFF....
// while(r - l > (double)1e-9){double mid = l + (r - l) / 2.0;if(cond(mid)){ans = mid;l = mid;}else{r = mid;}}  // TTTTFFFF....
// generally check function is O(n) in most problems and mid is the value we are checking in binary search
// a|b = a⊕b + a&b      a⊕(a&b) = (a|b)⊕b       b⊕(a&b) = (a|b)⊕a       (a&b)⊕(a|b) = a⊕b
// a+b = a|b + a&b      a+b = a⊕b + 2(a&b)
// a-b = (a⊕(a&b))-((a|b)⊕a)    a-b = ((a|b)⊕b)-((a|b)⊕a)   a-b = (a⊕(a&b))-(b⊕(a&b))   a-b = ((a|b)⊕b)-(b⊕(a&b))
 
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



struct T{
   ll sm=0;
   ll mx=0;
   ll mn=0;
};

class SegTree{
public:
    vector<T> seg; // use ds according to question, for eg. pair
    vector<ll> a;
    vector<ll> lazy;
    int n; 
    SegTree(vector<ll> v){
        a = v;
        n = v.size();
        seg.resize(4*n);
        lazy.resize(4*n);
        build(0,0,n-1);
    }
void build(int ind,int start,int end){
    if(start == end){
        seg[ind].sm = seg[ind].mx = seg[ind].mn = a[start];
        return; 
    }
    int mid = (start+end)>>1;
    build(2*ind+1,start,mid);
    build(2*ind+2,mid+1,end);
    seg[ind].sm = seg[2*ind+1].sm+seg[2*ind+2].sm; // operation may change to min,max,add,xor
    seg[ind].mx = max(seg[2*ind+1].mx,seg[2*ind+2].mx);
    seg[ind].mn = min(seg[2*ind+1].mn,seg[2*ind+2].mn);
}
T query(ll ind,ll left, ll right, ll start,ll end){
    if(lazy[ind]!=0){
    seg[ind].sm += (end-start+1)*lazy[ind]; // when min or max remove (end-start+1)
    seg[ind].mx += lazy[ind]; 
    seg[ind].mn += lazy[ind]; 
    if(start!=end){
        lazy[2*ind+1]+=lazy[ind];
        lazy[2*ind+2]+=lazy[ind];
    }
    lazy[ind] = 0;
  }
    if(left<=start && right>=end){
        return seg[ind];
    }
    else if(left>end || right<start)return {0,-INF,INF};
    else {
        ll mid = (start+end) >> 1;
        T p1 = query(2*ind+1,left,right,start,mid);
        T p2 = query(2*ind+2,left,right,mid+1,end);
        return {p1.sm+p2.sm,max(p1.mx,p2.mx),min(p1.mn,p2.mn)}; // operation may change to min,max,add,xor
 
    }
}
void update(int ind,ll i,ll j,ll k,int start, int end){
   if(lazy[ind]!=0){
    seg[ind].sm += (end-start+1)*lazy[ind]; // when min or max remove (end-start+1)
    seg[ind].mx += lazy[ind]; 
    seg[ind].mn += lazy[ind]; 
    if(start!=end){
        lazy[2*ind+1]+=lazy[ind];
        lazy[2*ind+2]+=lazy[ind];
    }
    lazy[ind] = 0;
   }
   if(start>j || i>end )return;
   if(start>=i && end<=j){
    seg[ind].sm += (end-start+1)*k; // when min or max remove (end-start+1)
    seg[ind].mx += k;
    seg[ind].mn += k;
    if(start!=end){
        lazy[2*ind+1]+=k;
        lazy[2*ind+2]+=k;
    }
    return ;
   }
   int mid = (start+end)>>1; 
   update(2*ind+1,i,j,k,start,mid);
   update(2*ind+2,i,j,k,mid+1,end);
    seg[ind] = {seg[2*ind+1].sm+seg[2*ind+2].sm,max(seg[2*ind+1].mx,seg[2*ind+2].mx),min(seg[2*ind+1].mn,seg[2*ind+2].mn)}; // operation may change to min,max,add,xor
}
};



 
void solve(){
 
    ll TC = 1;
    cin >> TC;
 
 
 
    while(TC--){


            ll n, m; cin >> n >> m;
            string str; cin >> str;
            vector<ll> A(n), pref(n);
            for(ll i = 0; i < n; i++){
                A[i] = (str[i] == '+' ? 1 : -1);
            }
            pref[0] = A[0];
            for(ll i = 1; i < n; i++){
                pref[i] = pref[i-1] + A[i];
            }

            SegTree st(pref);


            while(m--){

                ll l, r; cin >> l >> r; l--; r--;
                debug(l)debug(r)
                debug(pref)

                ll left_mx = (l == 0 ? 0 : st.query(0,0,l-1,0,n-1).mx);
                ll left_mn = (l == 0 ? 0 : st.query(0,0,l-1,0,n-1).mn);
                ll right_mx =(r == n - 1 ? 0 : st.query(0,r+1,n-1,0,n-1).mx - pref[r] + (l == 0 ? 0 : pref[l - 1]));
                ll right_mn = (r == n - 1 ? 0 : st.query(0,r+1,n-1,0,n-1).mn - pref[r] + (l == 0 ? 0 : pref[l - 1]));

                debug(left_mx)debug(left_mn)debug(right_mx)debug(right_mn)

                ll maxx = max({left_mx,left_mn,right_mx,right_mn});
                ll minn = min({left_mx,left_mn,right_mx,right_mn});

                if(maxx >= 0 && minn <= 0){
                    cout << maxx - minn + 1 << "\n";
                }else if(maxx >= 0 && minn >= 0){
                    cout << maxx + 1 << "\n";
                }else if(maxx <= 0 && minn <= 0){
                    cout << abs(minn) + 1 << "\n";
                }

                // cout << (max(right_mx,left_mx) - min(right_mn,left_mn) + 1LL) << "\n";




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
  //  divide by 2.0 to prevent precision errors
  
}