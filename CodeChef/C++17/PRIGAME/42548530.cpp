#include <bits/stdc++.h>
using namespace std;

#define n 1000005
bool arr[1000005];
int prime[1000005];

 void sieve () {
	for(long long i=0;i<sizeof(arr);i++){
        arr[i] = true;
	}
	arr[0] = false;
	arr[1] = false;
	for(long long i=2;i*i<=n;i++)
    {
        if(arr[i]==true)
        {
            for(long long j=i*i;j<=n;j+=i) arr[j]=false;
        }
    }
    prime[0] = 0;
    prime[1] = 0;
    for(int i=2;i<=n;i++)
    {
        prime[i]=prime[i-1];
        if(arr[i])prime[i]++;
    }

}
int main(){
     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      sieve();
      long long t;
    scanf("%lld",&t);
    while(t--){
             long long x,y ;

            scanf("%lld %lld ",&x,&y);
            long long z = prime[x];
            if(z<=y){printf("Chef\n");

            }else{
            printf("Divyam\n");}

    }

return 0;

}