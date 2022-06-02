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
ll dx[] = {1,0,-1,0,1,-1,1,-1};
ll dy[] = {0,1,0,-1,1,1,-1,-1};
string ds = "RLDU";




 
void solve(){
 
    // use brackets for binary operations.
    // use .lower_bound()
    // __lg for log
    // Think about all data structures first and which will be easy
    // to implement. vector, set, multiset, unordered_set, ordered_set(pbds),
    // map, multimap, unordered_map(custom hashing), Queue, priority_queue, stack.
    // Always define vector in global if passing in case of bfs, dfs specifically.
    
 
 
    ll t=1;
    cin >> t;
 
 
    while(t--){
    
        ll n, m, max_x = 0, max_y = 0, min_x = 0, min_y = 0;
        cin >> n >> m;
        ll ansx = 0, ansy = 0;

        string str;
        cin >> str;
        ll len = sz(str);

        ll x = 0, y = 0;

        for(ll i = 0 ; i < len ; i++){
            if(str[i] == 'U'){
                y--;
            }else if(str[i] == 'D'){
                y++;  
            }else if(str[i] == 'R'){
                x++;
            }else if(str[i] == 'L'){
                x--;
            }


            if(x > 0)max_x = max(max_x,x);
            if(y > 0)min_y = max(min_y,y);
            if(x < 0)min_x = max(min_x,-x);
            if(y < 0)max_y = max(max_y,-y);

            


            if(abs(max_x)+abs(min_x)>=m){
                if(str[i] == 'L'){min_x-=1;}
                if(str[i] == 'R'){max_x-=1;}
                break;
            }
            
            
            else if(abs(max_y)+abs(min_y)>=n){
                if(str[i] == 'D'){min_y-=1;}
                if(str[i] == 'U'){max_y-=1;}
                break;
            }

            // cout << abs(max_x)+abs(min_x) << "\n";
            // cout << abs(max_y)+abs(min_y) << "\n";

            


        }

        ansy += min_x + 1;
        ansx += max_y + 1;


        cout << ansx << " " << ansy << "\n";

        



 
        

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