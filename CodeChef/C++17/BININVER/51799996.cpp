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
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()




typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

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

void solve(){

	ll n , odd = 0 , even = 0;
    cin >> n;
    vector<ll> A(n);
    bool one = false;

    for(ll i = 0 ; i < n ; i++){
        cin >> A[i];
        if(A[i]==1){
            one = true;
        }
        if(A[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    if(one == true){
        cout << 0 << "\n";
    }else{

        if(odd > 0 && even > 0){
            cout << 0 << "\n";
        }else{

            if(odd==0){

                ll mn = 1e9;
                for(ll i = 0 ; i < n ; i++){
                    ll temp = 0;
                    while(A[i] % 2 == 0 && A[i] != 1){
                        A[i]/=2LL;
                        temp++;
                    }
                    if(A[i]%2==1){
                        mn = min(mn,temp);
                    }
                }
                cout << mn << "\n";


            }else{

                ll mn = 1e9;
                for(ll i = 0 ; i < n ; i++){
                    ll temp = 0;
                    while(A[i]%2==1 && A[i] != 1){
                        A[i]/=2LL;
                        temp++;
                    }
                    if(A[i]%2==0){
                        mn = min(mn,temp);
                    }
                }
                cout << mn << "\n";


            }

        }




    }



    



}


int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

    flash
    ll t=1;
    cin>>t;
    while(t--)
        solve();

}
