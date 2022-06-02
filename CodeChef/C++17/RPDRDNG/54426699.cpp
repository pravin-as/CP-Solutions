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
 
// while(l <= r){ll mid = l + (r - l) / 2;if(check(mid)){ans = mid;l = mid + 1;}else{r = mid - 1;}}    // TTTTFFFF....
//while(r - l > (double)1e-9){double mid = l + (r - l) / 2.0;if(cond(mid)){ans = mid;l = mid;}else{r = mid;}}  // TTTTFFFF....
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


            ll n; cin >> n;

            vector<ll> A(2*n);
            map<ll,ll> freq;
            for(ll i = 0; i < 2 * n; i++){
                cin >> A[i];
                freq[A[i]]++;
            }

            sort(A.begin(),A.end());
            bool flag = true;



            if(n == 2){

                if(A[0] == A[1] && A[1] == A[2] && A[2] != A[3]){
                    cout << A[0] << " " << A[3] << "\n";
                }else{
                    cout << -1 << "\n";
                }

                continue;
            }

            ll first = A[0], last = A[2 * n - 1], mid = A[n-1];

            for(ll i = 0; i < 2 * n ; i++){
                if(A[i] == first){
                    if(freq[A[i]] != 2){
                        flag = false;
                    }
                }else if(A[i] == mid){
                    if(freq[A[i]] != 3){
                        flag = false;
                    }
                }else if(A[i] == last){
                    if(freq[A[i]] != 1){
                        flag = false;
                    }
                }else{
                    if(freq[A[i]] != 2){
                        flag = false;
                    }
                }
            }

       

         ll p = -1;
            for(ll i = 0; i < n; i+=2){
                if(A[i] == A[i+1] && (p < A[i])){
                    p = A[i];
                }else{
                    flag = false;
                }
            }

            if(sz(freq) != n){
                cout << -1 << "\n";
                continue;
            }

            if(flag == true){

                set<ll> s;

                for(ll i = 0; i < n; i++){
                    if(i % 2 == 0){
                        s.insert(A[i]);
                    }
                }

                reverse(A.begin(),A.end());
                s.insert(A[0]);

                for(ll i = 0; i < n ; i++){
                    if(i % 2 == 1){
                        s.insert(A[i]);
                    }
                }

                if(sz(s)!=n){
                    cout << - 1 << "\n";
                    continue;
                }

                // vector<ll> temp;
                // for(auto i : s){
                //     temp.push_back(i);
                // }

                // for(ll )

                for(auto i : s){
                    cout << i << " ";
                }

                cout << "\n";

            }else{
                cout << - 1 << "\n";
            }







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