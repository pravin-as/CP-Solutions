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

        string str;
        cin >> str;
        ll n = (ll)str.size(), ans = -1, ind1 = 0, ind2 = 0, ind3 = 0, ind4 = 0;
        bool flag1 = false, flag2 = false;

        reverse(str.begin(),str.end());

        for(ll i = 0 ; i < n ; i++){
            if(str[i]=='0'){
                ind1 = i;
                i++;
                while(i<n){
                    if(str[i]=='0'||str[i]=='5'){
                        ind2 = i;
                        flag1 = true;
                        break;
                    }
                    i++;

                }
                if(flag1==true)break;

            }
        }

        debug(ind1)
        debug(ind2)
        debug(ind3)
        debug(ind4)

        for(ll i = 0 ; i < n ; i++){
            if(str[i]=='5'){
                ind3 = i;
                i++;
                while(i<n){
                    if(str[i]=='2'||str[i]=='7'){
                        ind4 = i;
                        flag2 = true;
                        break;
                    }
                    i++;

                }
                if(flag2==true)break;

            }
        }

        if(flag1==true&flag2==true){
            ans = min(ind4,ind2);
        } else if(flag1 == true && flag2 == false){
            ans = ind2;
        }else if(flag1 == false && flag2 == true){
            ans = ind4;
        }else{
            ans = n;
        }

        reverse(str.begin(),str.end());



        cout << (stoll(str) % 25LL == 0ll ? 0LL : ans - 1LL ) << "\n";



        



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

    ll bsearch(ll low, ll high)
    {

        if (low >= high) {
           return low;
        }

        ll mid = low + (high-low)/2;

        bool condition =                       //test for set of 2 elements, no yes! if wrong, change mid

        condition ? low = mid : high = mid-1 ;          // maintain the invariant [low,high)
                                // other case, low = mid+1 : high = mid , invariant is (low,high]
        return bsearch(low,high);
    }

