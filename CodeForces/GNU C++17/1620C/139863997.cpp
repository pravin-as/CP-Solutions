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
 
    
        ll n, k, x; cin >> n >> k >> x;
        x--;

        string str; cin >> str;
        vector<ll> a, b, c, d, e;

        str = "a" + str + "a";

        n+=2;

        for(ll i = 0; i < n; i++){
            if(str[i]=='a'){
                while(str[i]=='a'){
                    i++;
                }
                ll cnt = 0;
                while(i < n){
                    if(str[i]=='a'){
                        i--;
                        break;
                    }
                    cnt++;
                    i++;
                }
                a.push_back(cnt);
            }
        }

        string s = "";
        for(ll i = 1; i < n - 1; i++){
            s+=str[i];
        }

        n-=2;

        

        for(ll i = 0; i < sz(a) - 1; i++){
            b.push_back(a[i]);
        }

        

        for(ll i = 0; i < sz(b); i++){
            c.push_back(k*b[i]+1LL);
        }

        
        reverse(c.begin(),c.end());

        
        ll num = 1;

        for(ll i = 0; i < sz(c); i++){
            d.push_back(num);
            if(num  > INF / c[i]){
                num = INF;
            }else{
            num *= c[i];
            }
        }   

        reverse(d.begin(),d.end());
        reverse(c.begin(),c.end());


        for(ll i = 0; i < sz(d); i++){
            if(x < d[i]){
                e.push_back(0);
            }else{
                e.push_back(x/d[i]);
                x -= (((x/d[i])) * d[i]) ;
                debug(x)
                
            }
        }



        string fin = "";
        ll ind = 0;

        n = sz(s);
        debug(c)
        debug(d)
        debug(e)

        for(ll i = 0; i < sz(s); i++){

                
            if(s[i] == 'a'){
                while(s[i]=='a'&&i<n){
                    fin += "a";
                    i++;
                }
            }

            if(s[i]=='*'){
                 while(s[i]=='*'&&i<n){
                    i++;
                }
                debug(i)
                for(ll j = 1; j <= e[ind]; j++){
                    fin += "b";
                }
                debug(fin)
            }
            debug(ind)
            ind++;
            if(s[i]=='a'){i--;
                    }
                debug(fin)
        }

        cout << fin << "\n";


        
 



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