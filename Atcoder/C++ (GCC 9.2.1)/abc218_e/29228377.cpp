//****************************Template Begins****************************//

// Header Files
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<unordered_set>
#include<list>
#include<iterator>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<random>
#include<map>
#include<unordered_map>
#include<stdio.h>
#include<complex>
#include<math.h>
#include<cstring>
#include<chrono>
#include<string>
// Header Files End

using namespace std;
#define DIVYA ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(i=a;i<=b;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define inf 9999999999999
const ll mod = 1e9 + 7;

ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
//****************************Template Ends*******************************//
vll parent, rnk;
vector<pair<ll, pll>>edges;
ll find_set(ll u)
{
	if (parent[u] == u)return u;
	return parent[u] = find_set(parent[u]);
}
bool union_set(ll u, ll v)
{
	u = find_set(u);
	v = find_set(v);
	if (u == v)return false;
	if (rnk[u] > rnk[v])swap(u, v);
	parent[v] = u;
	if (rnk[u] == rnk[v])rnk[u]++;
	return true;
}
int main() {
	DIVYA;
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t, n, i, j, ans, temp, sum, m, u, v, c;
	string sans;
	t = 1;
	// cin >> t;
	while (t--)
	{
		sans = "NO";
		ans = temp = sum = 0;
		cin >> n >> m;
		parent.assign(n + 1, 0);
		rnk.assign(n + 1, 0);
		fo(i, 1, n)
		{
			parent[i] = i;
		}
		edges.clear();
		fo(i, 1, m)
		{
			cin >> u >> v >> c;
			edges.pb({c, {u, v}});
		}
		sort(all(edges));
		vll vec;
		for (auto edge : edges)
		{
			ll v1, v2, len;
			v1 = edge.second.first;
			v2 = edge.second.second;
			len = edge.first;
			if (union_set(v1, v2))
			{
				//
			}
			else
			{
				vec.pb(len);
			}
		}
		for (auto x : vec)
		{
			ans += max(0LL, x);
		}
		cout << ans;
	}
	return 0;
}













