// i started at 1:03 A.M. 1/2/2022 Author:: Gorssorser
#include <iostream>
#include <iomanip>
#include <list>
#define  ll long long int
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <queue>
#include <sstream>
#include <deque>
#define dd cout<<"print"<<endl;
#include <algorithm>
//#define mod 1000000007
#define mod1 998244353
#include <cmath>
#define run(a, m)  for(int i = 0 ; i <m;  i++  ) cin>>a[i];
#define run2(a, m)  for(int i = 0 ; i <m;  i++  ){ll v,u; \
                                cin>>u>>v; \
                                a[u]push_back(v);}

#define bhag(n,a) for(int i = a ; i < n+a; i++)
#define jldi(i ,  n , a) for(int i  = a ; i< n +a ; i++)
#define debmatrix(matrix){  cout<<"debuged matrix: "<<endl; for(auto i : matrix){for(auto j : i){cout<<j<<"  "; } \
 cout<<endl; }}
# define debarr(arr){ cout<<"deb arr :"<<endl;  for(auto i : arr){ cout<<i<<" "; } cout<<endl;   }
# define debval(a){cout<<"var : "<<a<<endl;}
//////////////////////////////////////////////////
//#define cout<<"\n" cout<<"\n";
using namespace std;
struct hash_pair
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1> {}(p.first);
        auto hash2 = hash<T2> {}(p.second);
        return hash1 ^ hash2;
    }
};
ll mod=1000000007;
ll power(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)ans = (ans*a)%mod;
        a = (a*a)%mod;
        b>>=1;
    }
    return ans;
}
ll power1(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)ans = (ans*a);
        a = (a*a);
        b>>=1;
    }
    return ans;
}
const long long MAX_SIZE = 1000001;
ll printDivisors1(ll n)
{
    ll temp  = 0 ;
    // Note that this loop runs till square root
    for (ll i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                temp++;

            else // Otherwise print both
                temp+=2;
        }
    }
    return temp;
}
vector<ll> Get_bits(ll k)  // For getting the total number of numbers upto the given number k
{
    ll kk = 0 ;
    vector<ll>vec1(20);
    ll k1 = k;
    while(k1)
    {
        ll sum1 = 0 ;
        if(((k+1)%power1(2, kk+1))>power1(2, kk))sum1 = ((k+1)%power1(2, kk+1))%power1(2,kk);

        vec1[kk] = power1(2, kk)*((k+1)/power1(2,kk+1)) +sum1;
        kk+=1;
        k1>>=1;


    }
    return vec1;
}
vector<long long >isprime(MAX_SIZE, true);
vector<long long >prime;
vector<long long >SPF(MAX_SIZE);

ll power(ll,ll);
void manipulated_seive(ll N = 100000 )
{

    isprime[0] = isprime[1] = false ;


    for (long long int i=2; i<N ; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }
        for (long long int j=0;
                j < (int)prime.size() &&
                i*prime[j] < N && prime[j] <= SPF[i];
                j++)
        {
            isprime[i*prime[j]]=false;
            SPF[i*prime[j]] = prime[j] ;
        }
    }
}


// function to print the divisors
vector<ll> printDivisors(ll n)
{
    vector<ll>vec;
    // Note that this loop runs till square root
    for (ll i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one

            // Otherwise print both
            vec.push_back(i) ; //vec.push_back( n/i);
        }
    }
    return vec;
}







ll countWays(ll n)
{

    ll count = 0;


    for (ll i = 1; i * i < n; i++)
        if (n % i == 0)
            count++;


    return count;
}

ll gcd(ll i,ll m)
{
    ll k = __gcd(i, m);
    cout<<"k:"<<k<<endl;
    if( k == 1&&i !=1)return 0;
    else if( k == 1&&i==1)return 1;
    else if(i/k == m)return 1;
    else return gcd(i/k,m);

}

vector<ll>weight;
vector<vector<ll>>adj_list;
void getthebinarystring(ll k, string &p)
{
    if(k == 0 )
    {
        p='0'+p;
        ll k1 = p.length();
        while(k1 != 30)
        {
            p = '0'+p;
            k1++;

        }
        return  ;
    }
    else if(k%2==0)
    {
        p='0'+p;
    }
    else p='1'+p;
    getthebinarystring(k>>1,p);




}
ll  get_binary_to_dec(ll  &k, string lk )
{
    for(auto i = 0 ; i< lk.length(); i++)
    {
        if(lk[i]=='1')k+=power1(2, lk.length()-1-i);

        // cout<<"from here the returing value is :   "<<i<<"   "<<k<<" "<<lk[i]<<endl ;
    }
    return 0 ;
}  ;


string desired_string ;
ll helperforit(string & t, string & z)
{
    for(auto i = 0 ;  i < max(t.length(), z.length()) ; i++)
    {
        if(desired_string[i] == '1')
        {
            if(t[i]=='1')z[i]= '0';
            else z[i] = '1' ;
        }
        else
        {
            if(t[i]=='1')z[i]= '1';
            else z[i] = '0' ;

        }
    }
    // cout<<"returning the value : "<<z<<endl;
    return 0 ;

}

//vector<ll>vec;

ll p;
vector<pair<ll,ll>>freq;
ll k1;
ll check(ll i )  ///////////////////////////////////Check/////////////////////////////////
{


}


//gfg

//


//vector<vector<ll>>vec1(5*100000, vector<ll>());
vector<vector<char >>matrix;
vector<vector<ll>>viber;


ll possibilty(ll k )
{
    vector<ll>dp;
    if (k < 0 )
    {
        return  0  ;
    }
    else return !dp[k] ;
}
ll helper(int i,  int mask, int n)
{
    vector<vector<ll>>dp ;
    //debmatrix(dp)
    //cout<<i<<" ";debval(i)
    //debval(mask)
    ll answer = 0 ;
    if(i == n)
    {
        return   1 ;
    }
    if(dp[i][mask] != -1)
    {
        return dp[i][mask];
    }
    else
    {
        for( auto j = 0 ; j < n  ; j++)
        {
            // cout<<viber[i][j]<<" j : "<<j<<endl;
            if(viber[i][j] && mask&(1<<j))
            {
                answer=(answer%mod + helper(i+1,mask^ (1<<j), n)%mod);
            }

        }
        return  dp[i][mask] =  answer;



    }

}
ll dfs_temp(ll node,ll parent)
{
vector<ll>dp;
    cout<<"called"<<endl ;
    ll count_if_black = 1;
    for(auto i : viber[node])
    {
        if(i!= parent)
            count_if_black*=(dfs_temp(i, node)+1) ;
    }
    dp[node] = count_if_black;
    for(auto i :viber[node])
    {
        if(i!= parent)        dp[i] += (count_if_black/(dp[i]+1)+1);

    }
    return count_if_black;

}

void add_self(ll &a, ll b )
{
    a = (a%mod+b%mod)%mod;



}
ll add_slf(ll a, ll b )
{
    return (a%mod+b%mod)%mod;



}

ll n ;
ll  mul(ll  a, ll b)
{
    return  ((a%mod)* (b%mod))%mod;

}
vector<pair<ll, ll>>boo;
struct M
{
    vector<vector<ll>>t;

    M()
    {
        t.assign (n+1, vector<ll>(n+1));
    }
    M operator *(M const &b)const
    {
        M c =  M();
        for(int i = 1; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                for(int k = 1 ; k <=  n ; k++)
                {

                    add_self(c.t[i][k], mul(t[i][j], b.t[j][k]) );

                }
            }

        }
//        debmatrix(c.t);
        return c ;
    }

};
bool bitchecker(

    ll i)
{
    ll count  = 0 ;
    while(i!= 0)
    {
        if(i%2)count++;
        i>>=1;

    }

    if(count%2 == 0)return true;
    else return false ;

}

ll inverse(ll num)
{
    ll h = num ;
    num =  (num ^ (n - 1));
    if(num)return num;
    else return h;
}
vector<ll>dp(2*1e5+6) ;
void precompute()
{
    for(ll i = 0 ;  i < 9  ; i++ )
    {
        dp[i] = 2;


    }
    dp[9] = 3;
    for(ll i  = 10 ; i<=dp.size() ; i++ )
    {
               add_self( dp[i] ,add_slf( dp[i-10] , dp[i-9]));

    }






}
ll solve( )
{
//    cout<<"called"<<endl;
    ll   r,l, j,m,q, k, m1, x, n1,a1;
    string str1;
    string str2;
    cin>>n>>m;
    vector<ll>vec;
  x = n ;
    while(x)
    {
        vec.push_back(x%10);
        x/=10;


    }
 ll ans = 0;
    for(ll i = 0 ; i< vec.size(); i++)
    {
        ll temp  =  vec[i] ;
       if(m >= (10-temp)) add_self(ans , dp[m-(10-temp)]);
       else   add_self( ans , 1);




    }

cout<<ans<<endl;

    return 0 ;
    //return of the solved
}


int  main()
{   precompute();
    cin.tie(0)->sync_with_stdio(false);
    ll t= 1;
    cin>>t;
    // manipulated_seive();
    while(t--)
    {
        //int prev = 0 ; for(int i1 = 0; i < 1000;  i++)cout<<i<<" "<<(prev|=i)<<endl;

        // cout<<"i am here"<<endl;
        solve();
        // cout<<"ans"<<endl;
    }


    return 0;
}

//4
//1 2 3 4
//1 2 3 6
/////Rough
/*
if every comntiguous array has a mex x then what should we be aware of that
    0 1  2 3 .. x-1 0 1 2 3 4 x-1
    5 4 5
    0  1 2 3 4
*/
/*
To do :

 --> at coder dp contest q

    //sort(vec.begin () ,vec.end());
    //what about getting the bits of the number erll even if i get it then i know what to make out of it
    // now what we can do is that we can get the bits wise xor of all the elements


 */
/*

well  question is similar to asking the question like is there any way in which the
main character without meeting the one of the friend can it be done

like you can time stamp on each of the node than what we can do is that
so what can be done on it =

what if i know where the friend will be or is there any way to reach from any of the node to any od the
friends nodes
so lets see

 cin>>n>>n;
    vector<vector<ll>>vec(n , vector<ll>(3));
    bhag(n , 0)cin>>vec[i][2];
    bhag(n , 0)cin>>vec[i][1];
    bhag(n , 0){vec[i][0] = (vec[i][1]/vec[i][2]);  }
     ll ans  = 0;
    sort(vec.begin() ,vec.end(), greater<vector<ll>>());
    for(ll i : vec)
     {
           ll msb = 1 ;  ll bits = 0 ;
           ll temp  =  i[2];
           while(temp){
                temp>>=1;
                msb<<=1;
                bits++;

           }
           msb >>=1; bits--;


         ll get =  i[2]-msb;
         ll x = 1;
        while(get != msb ){
            if(msb+msb/x <= get){   bits++;       msb =  msb/x;  }
          get--; x++;

        }

           if(k-(bits)>=0){k = k-(bits);  cout<<bits<<" "<<i[2]<<endl; ans+=i[1];     }


     }
     cout<<ans<<endl;



*/
