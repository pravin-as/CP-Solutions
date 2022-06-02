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


void solve(){

    // use brackets for binary operations.

    ll t=1;
    cin >> t;


    while(t--){

        ll n;
        cin >> n;
        vector<ll> A(n), B, C, D, E;
        for(ll i = 0 ; i < n ; i++){
            cin >> A[i];
            if(i%2==0)B.push_back(A[i]);
            if(i%2==1)C.push_back(A[i]);

        }

        if(n == 1){cout << A[0] << "\n";cout << 0 << "\n";continue;}

        sort(B.begin(),B.end());
        reverse(B.begin(),B.end());
        sort(C.begin(),C.end());

        

        ll l = 0, r = 0;
        for(ll i = 0 ; i < n; i++){
            if(i%2==0){D.push_back(B[l]);l++;}
            if(i%2==1){D.push_back(C[r]);r++;}

        }

        for(ll i = (ll)C.size() - 2 ; i >= 0 ; i--){
            C[i] += C[i+1]; 
        }
        l = 0; r = 0;
        for(ll i = 0 ; i < n; i++){
            if(i%2==0){E.push_back(B[l]);l++;}
            if(i%2==1){E.push_back(C[r]);r++;}

        }

        ll ans = 0;

        for(ll i = 0; i < min(sz(B),sz(C)) ; i++){
            ans += B[i]*C[i];
        }

        for(auto i : D){
            cout << i << " ";
        }
        cout << "\n";
        cout << ans << "\n";
        debug(B)
        debug(C)
        debug(D)
        debug(E)








        }


}



int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

  //  flash
    solve();
  //  cout<<fixed<<setprecision(10)<<mx<<"\n";
  // __lg for log
}