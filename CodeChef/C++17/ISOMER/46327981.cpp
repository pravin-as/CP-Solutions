#include <bits/stdc++.h>
using namespace std;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
int main()
{
      flash

      ll A[] = { 0, 1, 1, 1, 2, 3, 5, 9, 18, 35, 75, 159, 355, 802, 1858, 4347, 10359, 24894, 60523, 148284,
					366319};

	  ll tc;scanf("%lld",&tc);;while(tc--)
	  {
	  	int n;
	  	scanf("%d",&n);


       printf("%lld\n",A[n]);



	  }
	return 0;
}
