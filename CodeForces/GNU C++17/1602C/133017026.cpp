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

ll gcd(ll a, ll b)
{
    if (a == 0LL)
        return b;
    return gcd(b % a, a);
}

void ans(ll n)
{
    vector<ll> temp;
   
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            
            if (n/i == i){
                temp.push_back(i);
            }
 
            else {
                temp.push_back(i);
                temp.push_back(n/i);
            }
        }
    }
    sort(temp.begin(),temp.end());
    for(auto i : temp){
        cout << i << " ";
    }
    cout << "\n";
}


void solve(){

    // use brackets for binary operations.

    ll t=1;
    cin >> t;


    while(t--){

       ll n;
       cin >> n;
       vector<ll> A, C;

       for(ll i = 0 ; i < n ; i++){
            ll temp;
            cin >>temp;
            if(temp!=0)
            A.push_back(temp);
       }
       debug(sz(A))
       if(sz(A)==0LL){for(ll i = 1 ; i<= n ;i++){cout<<i<<" ";}cout<<"\n";continue;}

       n = (ll)A.size();

       vector<vector<ll>> B(n);

       for(ll i = 0 ; i < n;  i++){
            ll temp = A[i];
            while(temp > 0){
                B[i].push_back(temp%2LL);
                temp/=2LL;

            }

           // reverse(B[i].begin(),B[i].end());
           // debug(B[i])
       }
       ll mx = 0;
       for(auto i : B){
            mx = max(sz(i),mx);
       }

   //    debug(mx)

       for(ll i = 0 ; i < n ; i++){
            ll temp = sz(B[i]);
            for(ll j = 0; j < mx - temp ; j++){
                B[i].push_back(0LL);
            }
            reverse(B[i].begin(),B[i].end());
       }

       
        for(ll j = 0 ; j < mx ; j++){
            ll sm = 0LL;
            for(ll i = 0 ; i < n ; i++){
                sm += B[i][j];
        }
        C.push_back(sm);
       }

       ll gc = C[0];
       for(ll i = 1 ; i < sz(C) ; i++){
            gc = gcd(C[i],gc);
       }

       ans(gc);


       





        }


}



int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    flash
    solve();
  //  cout<<fixed<<setprecision(10)<<mx<<"\n";
  // __lg for log
}