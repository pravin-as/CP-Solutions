#include "bits/stdc++.h"
using namespace std;
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;

const int N=3e5+5;

void solve(){
	int n,m;
	cin >> n >> m;
	
	vector<int> a(n);
	vector<int> cnt_to_id(n+1);
	map<int, int> f;
	rep(i,0,n){
		cin >> a[i];
		f[a[i]]++;
	}
	
	vector<int> vals = a;
	sort(all(vals),greater<int>());
	uniq(vals);
	
	vector<int> freq = vals;
	rep(i,0,sz(vals)){
		freq[i] = f[vals[i]];
	}
	
	auto val_to_id = [&](int val){
		return lower_bound(all(vals),val,greater<int>()) - vals.begin();
	};
	
	vector<int> cnts;
	for(int v:vals){
		cnts.pb(f[v]);
	}
	sort(all(cnts));
	uniq(cnts);
	
	rep(i,0,sz(cnts)){
		cnt_to_id[cnts[i]] = i;
	}
	
	
	vector<vector<int>> v(n);
	rep(i,0,m){
		int x,y;
		cin >> x >> y;
		x = val_to_id(x);
		y = val_to_id(y);
		v[x].pb(y);
		v[y].pb(x);
	}
	
	int nc = sz(cnts);
	vector<vector<int>> s(nc);
	rep(i,0,sz(vals)){
		int x = vals[i];
		int cx = freq[i];
		s[cnt_to_id[cx]].pb(i);
		v[i].pb(i);
	}
	
	rep(i,0,nc){
		sort(all(s[i]));
	}
	
	rep(i,0,sz(vals)){
		sort(all(v[i]));
	}
	
	
	
	vector<int> cache(nc);
	long long ans = 0;
	rep(i,0,sz(vals)){
		int cx = freq[i];
		int x = vals[i];
		
		for(int j:v[i]){
			int cy = freq[j];
			int id = cnt_to_id[cy];
			if(s[id][cache[id]] == j){
				cache[id]++;
			}
			// cout << x << " " << vals[j] << "\n";
		}
		
		rep(j,0,nc){
			if(cache[j] != sz(s[j])){
				int c = cnts[j];
				amax(ans, 1ll * (x + vals[s[j][cache[j]]]) * (c + cx));
				// cout << x << " " << cx << " " << vals[s[j][cache[j]]] << " " << ans << "\n";
			}
			cache[j] = 0;
		}
	}
	
	cout << ans << "\n";
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	#ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}
