        #include <bits/stdc++.h>
        using namespace std;
        #define flash ios_base::sync_with_stdio(0);cin.tie(0);
        #define ll long long

        int main(){
           flash
           ll n,m;
           cin>>n>>m;
           vector<int> a(n);
           vector<int> b(m);
           set<int> x;
           for(int i =0 ; i <n;i++){cin>>a[i];}
           for(int i = 0 ; i<m;i++){cin>>b[i];}
           bool flag = true;

           for(int i = 0 ; i<n;i++){

            flag = true;

            for(int j = 0 ; j<m;j++){

             if(a[i]==b[j])
                  flag = false;

            }

             if(flag)x.insert(a[i]);

           }

             for(int i = 0 ; i<m;i++){

            flag = true;

            for(int j = 0 ; j<n;j++){

             if(b[i]==a[j])
                  flag = false;

            }

             if(flag)x.insert(b[i]);

           }

           for(auto i : x){

            cout<<i<<" ";

           }

            return 0;

        }
