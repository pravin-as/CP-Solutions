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



// Make "Trie tr;". When want to work in binary subtract '0'from
// while if want to work with string subtract 'a' from string. 


vector<map<int,int>> mp((ll)1e5+5);
struct Node{

    const static int B = 26; 
    Node *links[B];
    int cntEndWith = 0;
    int cntPrefix = 0;

    bool containsKey(char ch){
        return (links[ch - 'a'] != NULL);
    }
    Node* get(char ch){
        return links[ch - 'a'];
    }
    void put(char ch, Node* node){
        links[ch - 'a'] = node;
    }
    void increaseEnd(){
        cntEndWith++;
    }
    void increasePrefix(char ch, int nu){
        cntPrefix++;
        mp[nu][cntPrefix]++;
    }
    void deleteEnd(){
        cntEndWith--;
    }
    void reducePrefix(char ch, int nu){
        mp[nu][cntPrefix]--;
        cntPrefix--;
    }
    int getEnd(){
        return cntEndWith;
    }
    int getPrefix(){
        return cntPrefix;
    }

};


class Trie{

public:
    Node *root;
    Trie(){
        root = new Node();
    }

    void insert(string word){
        Node *node = root;

        for(int i = 0; i < word.length(); i++){
            if(!node -> containsKey(word[i])){
                node -> put(word[i], new Node());
            }
            node = node -> get(word[i]);
            node -> increasePrefix(word[i], i);
        }
        node -> increaseEnd();
    }

    int countWordsEqualTo(string word){
        Node *node = root;
        for(int i = 0; i < word.length(); i++){
            if(node -> containsKey(word[i])){
                node = node -> get(word[i]);
            }else{
                return 0;
            }
        }
        return node -> getEnd();
    }

    int countWordsStartingWith(string word){
        Node *node = root;
        for(int i = 0; i < word.length(); i++){
            if(node -> containsKey(word[i])){
                node = node -> get(word[i]);
            }else{
                return 0;
            }
        }
        return node -> getPrefix();
    }

    void erase(string word){
        if(!check(word)) return;
        Node *node = root;
        for(int i = 0; i < word.length(); i++){
            if(node -> containsKey(word[i])){
                node = node -> get(word[i]);
                node -> reducePrefix(word[i],i);
            }else{
                return;
            }
        }
        node -> deleteEnd();
    }

    bool check(string word){
        Node *node = root;
        for(int i = 0; i < word.length(); i++){
            if(node -> containsKey(word[i])){
                node = node -> get(word[i]);
            }else{
                return false;
            }
        }
        return true;
    }



    string integerToBin(int num){
        string word = "";
        for(int i = 31; i >= 0; i--){
            int bit = ((num >> i) & 1);
            word += to_string(bit);
        }
        return word;
    }

    void insertInteger(int num){
        string word = integerToBin(num);
        insert(word);
    }

    int maxXor(int num){
        Node* node = root;
        int maxNum = 0;
        for(int i = 31; i >= 0; i--){
            int bit = ((num >> i) & 1);
            char BIT = (bit + '0'), NOTBIT = (!bit + '0');
            if(node -> containsKey(NOTBIT)){
                maxNum = (maxNum | (1 << i));
                node = node -> get(NOTBIT);
            }else{
                node = node -> get(BIT);
            }
        }
        return maxNum;
    }


};

 
void solve(){
 
    ll TC = 1;
    // cin >> TC;
 
 
 
    while(TC--){


            ll q; cin >> q;
            Trie t;
            map<ll,string> que;
            for(ll i = 1; i <= q; i++){

                ll type; cin >> type;
                if(type == 1){
                    string str; cin >> str;

                    reverse(all(str));
                    t.insert(str);
                    que[i] = str;

                }else if(type == 2){
                    ll k, l; cin >> k >> l;
                    ll num = 0;
                    l--;
                    bool flag = false;
                    if(mp[l][k]>0)flag = true;
                    cout << (flag ? "YES" : "NO") << "\n";
                }else{
                    ll x; cin >> x;

                    t.erase(que[x]);
                    que[x] = "";
                }
                cerr<<"Query "<<i<<endl;
                debug(mp);

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