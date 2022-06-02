#include <iostream>
using namespace std;

int main()
{


	  long long t;cin>>t;while(t--)
	  {
	  	long long n;cin>>n;
	  	for(long long i=1;i<=n-1;i++)
	  	{

             for(long long j=0;j<i;j++){cout<<"| ";}
             for(long long j=0;j<2*n-1-2*i;j++){cout<<n-i+1<<" ";}
             for(long long j=0;j<i;j++){cout<<"| ";}
             cout<<'\n';
	  	}
	  	for(long long i=0;i<n-1;i++){cout<<"| ";}
	  	cout<<1<<" ";
	  	for(long long i=0;i<n-1;i++){cout<<"| ";}
	  	cout<<'\n';
	    for(long long i=n-1;i>=1;i--)
	    {
	    	for(long long j=0;j<i;j++){cout<<"| ";}
	        for(long long j=0;j<2*n-1-2*i;j++){cout<<n-i+1<<" ";}
	        for(long long j=0;j<i;j++){cout<<"| ";}
	        cout<<'\n';
	    }
	    cout<<'\n';
	  }

	return 0;
}
