#include <bits/stdc++.h>
using namespace std;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long

    int main(){
        flash

        int t;
        cin>>t;

        while(t--){

             string s,p,ans="";
             cin>>s>>p;
             int n = s.size();
             int m = p.size();
             int j=-1;

             for(int i = 0 ; i<n ; i++){

                while(j<m-1){
                j++;
                if(s[i]==p[j]){ans+=s[i];break;}
                }

             }
            if(ans==s){
                cout<<"YES"<<endl;
               }else{
               cout<<"NO"<<endl;

       }

       }


   return 0;}

