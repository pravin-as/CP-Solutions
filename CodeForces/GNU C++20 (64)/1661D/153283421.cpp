#include <bits/stdc++.h>
using namespace std;

/*<DEBUG>*/
#define tem template <typename 
#define can_shift(_X_, ...) enable_if_t<sizeof test<_X_>(0) __VA_ARGS__ 8, debug&> operator<<(T i)
#define _op debug& operator<<
tem C > auto test(C *x) -> decltype(cerr << *x, 0LL);
tem C > char test(...);
tem C > struct itr{C begin, end; };
tem C > itr<C> get_range(C b, C e) { return itr<C>{b, e}; };
struct debug{
#ifdef _LOCAL
	~debug(){ cerr << endl; }
	tem T > can_shift(T, ==){ cerr << boolalpha << i; return *this; }
	tem T> can_shift(T, !=){ return *this << get_range(begin(i), end(i)); }
	tem T, typename U > _op (pair<T, U> i){ 
		return *this << "< " << i.first << " , " << i.second << " >"; }
	tem T> _op (itr<T> i){
		*this <<  "{ ";
		for(auto it = i.begin; it != i.end; it++){
			*this << " , " + (it==i.begin?2:0) << *it;
		}
		return *this << " }";
	}
#else
tem T> _op (const T&) { return *this; }
#endif 
};

string _ARR_(int* arr, int sz){
	string ret = "{ " + to_string(arr[0]); 
	for(int i = 1; i < sz; i++) ret += " , " +  to_string(arr[i]);
	ret += " }"; return ret;
}

#define exp(...) " [ " << #__VA_ARGS__ << " : " << (__VA_ARGS__) << " ]"
/*</DEBUG>*/

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;

#define pb push_back
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define TC int __TC__; cin >> __TC__; while(__TC__--)

const ll INF = 1e18 + 7;

struct item{
	ll left, step;
};

struct SegTree{
	int sz;
	vector<item> values;
	vector<ll> add;

	//-----<Set up the neutral element, single, and merge for current item>-----//
	
	item NEUTRAL_ELEMENT = {0LL, 0LL};
	ll NO_OP = 0;

	void prop(int x, int lx, int rx){
		if(rx - lx == 1) return;
		int len = (rx - lx) /2;

		//propogate add
		add[2*x + 1] += add[x];
		add[2*x + 2] += add[x];
		add[x] = 0;

		//left child
		values[2*x + 1].left += values[x].left;
		values[2*x + 1].step += values[x].step;

		//right child
		values[2*x + 2].left += (values[x].left + (len* values[x].step));
		values[2*x + 2].step += values[x].step;

		//self
		values[x].left = 0;
		values[x].step = 0;
		return;
	}


	//-----</Set up the neutral element, single, and merge for current item>-----//

	void init(int n){
		sz = 1;
		while(sz < n) sz*=2;
		values.assign(sz*2, NEUTRAL_ELEMENT);
		add.assign(sz*2, 0LL);
		return;
	}

	void modify_range(int l, int r, ll a, ll v, int x, int lx, int rx){
		prop(x, lx, rx);
		if(r <= lx || l >= rx) return;

		if(lx >= l && rx <= r){
			add[x] += a;
			values[x].step += v;
			values[x].left += (v * (lx - l));
		//	debug() << exp(lx) << exp(rx) << exp(l) << exp(v) << exp(v*(lx-l));
			return;
		}

		int m = lx + (rx - lx)/2;
		modify_range(l, r, a, v, 2*x + 1, lx, m);
		modify_range(l, r, a, v,2*x + 2, m, rx);
		return;
	}

	void modify_range(int l, int r, ll a, ll v){
		modify_range(l, r, a, v,0, 0, sz);
		return;
	}

	ll pos_value(int i, int x, int lx, int rx){
		prop(x, lx, rx);

		if(rx - lx == 1){
			return (values[x].left + add[x]);
		}

		int m = lx + (rx - lx) / 2;

		if(m <= i){
			return pos_value(i, 2*x + 2, m, rx);
		}else{
			return pos_value(i, 2*x + 1, lx, m);
		}
	}

	ll pos_value(int i){
		return pos_value(i, 0, 0, sz);
	}
};

int main(void)
{ 
	FAST;
	int n, k; cin >> n >> k;
	vector<ll> b(n);
	for(ll &t : b) cin >> t;

	SegTree st;
	st.init(n);

	ll ans = 0;
	for(int i = n-1; i >= 0; --i){
		ll v = st.pos_value(i);
		if(v < b[i]){
			ll most = min(k, i+1);
			ll times = (b[i]-v+most-1)/most;
			ans += times;
			debug() << exp(i-most) exp(i) exp(most);
			st.modify_range(i-most+1, i, times, times);
		}
	}

	cout << ans << '\n';

	return 0;
}

