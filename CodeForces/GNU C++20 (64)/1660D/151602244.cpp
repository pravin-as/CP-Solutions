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








void solve(){

    ll TC = 1;
    cin >> TC;



    while(TC--){


            ll n, no_of_two = 0; cin >> n;
            vector<ll> A(n+5);
            for(ll i = 1; i <= n; i++){
                cin >> A[i];
            }
            A[n+1] = 0; A[0] = 0;
            pair<ll,ll> pr = {n,0};

            // debug(A)


            for(ll i = 0; i <= n + 1; i++){
                ll l = -1, r = -1;
                bool flag = false;
                if(A[i] == 0){
                    flag = true;
                    l = i + 1;
                    i++;
                    while(i <= n + 1 && A[i] != 0){
                        i++;
                    }
                    r = i - 1;
                    // debug(l)debug(r)

                    // if(l > r)break;

                    ll a = 0, b = 0, c = 0, d = 0, e = 0;

                    for(ll j = l; j <= r; j++){
                        if(A[j] == -2)a++;
                        if(A[j] == -1)b++;
                        if(A[j] ==  0)c++;
                        if(A[j] ==  1)d++;
                        if(A[j] ==  2)e++;
                    }


                    if((a + b) % 2 == 0){
                        if(no_of_two < a + e){
                            pr = {l - 1, n - r};
                            no_of_two = a + e;
                        }

                    }else{
                        ll left = 0, right = 0;
                        ll ans_left = 0, ans_right = 0;
                        ll two_l = 0, two_r = 0;
                        for(ll j = l; j <= r; j++){
                            if(abs(A[j]) == 2)two_l++;
                            if(A[j] < 0){
                                left++;
                                ans_left = j;
                                break;
                            }
                        }

                        for(ll j = r; j >= l; j--){
                            if(abs(A[j]) == 2)two_r++;
                            if(A[j] < 0){
                                right++;
                                ans_right = j;
                                break;
                            }
                        }


                        if(two_l <= two_r){
                            if(no_of_two < a + e - two_l){
                                pr = {ans_left, n - r};
                                no_of_two = a + e - two_l;
                            }
                        }else if(two_l >= two_r){
                            if(no_of_two < a + e - two_r){
                                pr = {l - 1, n - ans_right + 1};
                                no_of_two = a + e - two_r;
                            }
                        }




                    }


                }
                if(flag)i--;

                // debug(l)debug(r)
            }


            cout << pr.ff << " " << pr.ss << "\n";



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
