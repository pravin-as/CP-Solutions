#include <bits/stdc++.h>
using namespace std;

string revers(string n){

int kp = n.size();

string s ="";

for(int i =  0 ; i<kp;i++){s+=n[kp-i-1];}

return s;


}

int main(){

   int t;
   cin>>t;

   for(int i = 0 ; i<t ;i++ ){

    int n;
    cin>>n;
    vector<string> A(n);
    string p;

    for(int i = 0 ; i < n ; i++){cin>>p;A[i]=revers(p);}
    sort(A.begin(),A.end());

  cout<<"Case "<<i+1<<":"<<endl;


  for(int i = 0 ;  i<n;i++){
        cout<<revers(A[i])<<"\n";
    }
   }
}
