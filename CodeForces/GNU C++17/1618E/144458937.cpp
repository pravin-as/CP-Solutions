

/*                                                   The internationalVillager                                                */



/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/**** //                //    // // // // // //              // // // //      // // // //           //         // // // // ****/
/**** // //          // //    //                             //                       //          ////         //          ****/
/**** //    //    //    //    //                             //                      //         //  //         //          ****/
/**** //       //       //    // // // // // //              // // // //         // // //     // // // //      // // // // ****/
/**** //                //                   //                       //           //               //         //       // ****/
/**** //                //                   //                       //          //                //         //       // ****/
/**** //                //    // // // // // // ............ // // // //         //                 //         // // // // ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/

/// ORDERED SET OPENED

/// Below are the header files and functions specifically for ordered set
/// ordered_set s;        :::: Declaration of ordered set
/// s.find_by_order(k)    :::: It returns to an iterator to the kth element (counting from zero)
/// s.order_of_key(k)     :::: It returns to the number of items that are strictly smaller than our item k
/// #include <ext/pb_ds/assoc_container.hpp>
/// #include <ext/pb_ds/tree_policy.hpp>
/// using namespace __gnu_pbds;
/// #define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

/// ORDERED SET CLOSED

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define pf push_front
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define Print(arr) for(i=0;i<arr.size();i++)cout<<arr[i]<<" "
#define for_all(arr) for(i=0;i<arr.size();i++)
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MAX 1000000006
#define I_love_her  true
#define I_hate_her  false
#define lineBreak cout<<endl;
set<string>boss;
// bool prime[1000006];
//const int N=1e5+5;
//int parent[N],rank_[N];
//#define MAXN   200001
//ll spf[MAXN];
/*void sieve()
{
    spf[1] = 1;
    for (ll i=2; i<MAXN; i++)
        spf[i] = i;
    for (ll i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (ll i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (ll j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}*/

                                                  /// To use nCr uncomment from here

/*const int N = 1000001;                                      -
ll factorialNumInverse[N + 1];

// array to precompute inverse of 1! to N!                 -
ll naturalNumInverse[N + 1];

// array to store factorial of first N numbers              -
ll fact[N + 1];

// Function to precompute inverse of numbers
void InverseofNumber(ll p)
{                                                                -
    naturalNumInverse[0] = naturalNumInverse[1] = 1;
    for (int i = 2; i <= N; i++)
        naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p;
}
// Function to precompute inverse of factorials
void InverseofFactorial(ll p)                                  -                      -
{
    factorialNumInverse[0] = factorialNumInverse[1] = 1;

    // precompute inverse of natural numbers
    for (int i = 2; i <= N; i++)                                        -
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p;
}

// Function to calculate factorial of 1 to N                               -
void factorial(ll p)
{
    fact[0] = 1;

    // precompute factorials                                                -
    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i - 1] * i) % p;
    }
}                                                                           -

// Function to return nCr % p in O(1) time                                       -
ll Binomial(ll N, ll R, ll p)
{
    // n C r = n!*inverse(r!)*inverse((n-r)!)
    ll ans = ((fact[N] * factorialNumInverse[R])                             -
              % p * factorialNumInverse[N - R])
             % p;
    return ans;                                                  -
}*/
                                                                  ///Till here for nCr
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}



void divisors(int n)
{
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                cout <<" "<< i;

            else
                cout << " "<< i << " " << n/i;
        }
    }
}

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
    if (n > 2)
        cout << n << " ";
}
long long factorial(int n)
{
     int M = 1000000007;

     long long f = 1;
    for (int i = 1; i <= n; i++)
        f = (f*i) % M;  // Now f never can
                        // exceed 10^9+7
    return f;
}
bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
/*void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}*/
void printS (multiset<int>myset)
{
    for (auto it = myset.begin(); it !=
                             myset.end(); ++it)
        cout << *it<< ' ' ;
    cout<<endl;
}
void printS (set<int>myset)
{
    for (auto it = myset.begin(); it !=
                             myset.end(); ++it)
        cout << *it<< ' ' ;
    cout<<endl;
}
void printS (set<char>myset)
{
    for (auto it = myset.begin(); it !=
                             myset.end(); ++it)
        cout << *it<< ' ' ;
    cout<<endl;
}
void printSS (set<string>myset)
{
    for (auto it = myset.begin(); it !=
                             myset.end(); ++it)
        cout << *it<< ' ' ;
    cout<<endl;
}
void printV (vector<int>v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
void printV (vector<ll>v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
void printMii (map<ll,ll>mp)
{
    for(auto it:mp)
        cout<<it.first<<" "<<it.second<<endl;
}
void printMii (map<int,int>mp)
{
    for(auto it:mp)
        cout<<it.first<<" "<<it.second<<endl;
}
void printVP (vector<pair<ll,ll>>v)
{
    for(ll i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
}
void printVP (vector<pair<int,int>>v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
}
void printA (int v[],int n)
{
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
/*int findPar(int node)
{
    if(node==parent[node])
        return node;
    return parent[node] = findPar(parent[node]);
}
void union_(int u,int v)
{
    u = findPar(u);
    v = findPar(v);
    if(rank_[u] < rank_[v])
        parent[u]=v;
    else if(rank_[v] < rank_[u])
        parent[v]=u;
    else
    {
        parent[v] = u;
        rank_[u]++;
    }
}
void DSU(int n,vector<vector<int>>&p) /// 1 based indexing
{
    for(int i=1;i<=n;i++)
        parent[i]=i;
    for(int i=0;i<n;i++)
        union_(p[i][0],p[i][1]);
}*/
ll power(ll x, ll y, ll p)
{
    ll res = 1;     // Initialize result

    x = x % p; // Update x if it is more than or
                // equal to p

    if (x == 0) return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
bool isPal(string s)
{
    int i,n=s.size();
    for(i=0;i<n/2;i++)
        if(s[i]!=s[n-1-i])
            return false;
    return true;
}
bool isValid(ll m,vector<ll>&a,ll k)
{
    ll i,n=a.size(),ans=0;
    for(i=n/2;i<n;i++)
        ans+=max(0LL,m-a[i]);
    return ans<=k;
}
void solve()
{
    // For floating precision use :-
    //cout<<setprecision(10);
    //cout<<fixed;
    // Closed
    // DSU(n,p);
    /// p in vector<vector<int>> ///
    /// And to check if two nodes belong to same component
    /// findPar(u) == findPar(v) yes else no
    ll n,i;
    cin>>n;
    vector<ll>a(n);
    for(i=0;i<n;i++)cin>>a[i];
    if(n==1)
    {
        yes
        cout<<a[0]<<endl;
        return;
    }
    else if(n==2)
    {
        if(2LL*a[1]-a[0]>0 && ((2LL*a[1]-a[0]) % 3 == 0) && (2LL*a[1]-a[0]) / 3<=1000000000 && 2LL*a[1]-a[0]>0 && 2LL*a[0]-a[1]>0 && ((2LL*a[0]-a[1]) % 3 == 0) && (2LL*a[0]-a[1]) / 3<=1000000000 && 2LL*a[0]-a[1]>0)
        {
            yes
            cout<<(2LL*a[1]-a[0]) / 3<<" "<<(2LL*a[0]-a[1]) / 3<<endl;
        }
        else no
        return;
    }
    vector<ll>ans(n);
    ans[0]=0;
    if((a[n-1]+a[1]-2LL*a[0])%n)
    {
        no
        return;
    }
    ans[1]=(-1)*(a[n-1]+a[1]-2LL*a[0])/n;
    for(i=1;i<n-1;i++)
    {
        if((a[i-1]+a[i+1]-2LL*a[i])%n!=0)
        {
            no
            return;
        }
        ll temp=(a[i-1]+a[i+1]-2LL*a[i])/n;
        ans[i+1]=ans[i]-temp;
    }
    if((a[n-2]+a[0]-2LL*a[n-1])%n || ans[n-1]!=(a[n-2]+a[0]-2LL*a[n-1])/n)
    {
        no
        return;
    }
    ll toAdd;
    ll sum=0;
    for(i=0;i<n-1;i++)
        sum+=(ans[i+1]*(n-i));
    if(a[0]>sum)
    {
        ll diff=a[0]-sum;
        if(diff%(n*(n+1)/2))
        {
            no
            return;
        }
        toAdd=diff/(n*(n+1)/2);
        if(*min_element(all(ans))+toAdd<1 || *max_element(all(ans))+toAdd>1000000000)
        {
            no
            return;
        }
        for(i=0;i<n;i++)
            ans[i]+=toAdd;
        yes
        printV(ans);
    }
    else no
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    //cin.tie(NULL);
    //sieve();
    /// For nCr uncomment from here
    //ll p = 1000000007;
    //InverseofNumber(p);
    //InverseofFactorial(p);
    //factorial(p);
    /// Till here
    /// And use it as Binomial(n,r,p)
    int t;
    cin>>t;
    //t=1;
    //SieveOfEratosthenes(1000005);
    for(int i=1;i<=t;i++)
        solve();
    return 0;
}
/// The basic syntax of BINARY SEARCH OPENED

/// assign l to be minimum value which satisfies the condition
/// assign ans = l
/// assign h to be maximum value which can never be answer
/// define a function isValid with required arguments which checks can any value x satisfy the condition
/// now the code begins
/// while(l<=h)
/// {
///     ll m=(l+h)/2;
///     if(isValid(m,other args))
///     {
///         ans=m;
///         l=m+1;
///     }
///     else h=m-1;
/// }
/// cout<<ans<<endl;

/// BINARY SEARCH CLOSED
