#include <bits/stdc++.h>
using namespace std;

long long ans(vector<string> s1,vector<string>s2)
{
    set<string> s;

    for(long long i=1;i<s1.size();i++)

        s.insert(s1[i]);

    for(long long i=1;i<s2.size();i++)

        s.insert(s2[i]);


    return s.size();

}



int main()
{
    long long t ;

    cin>>t;

    while(t--){

        long long n;

        cin>>n;

        string a[n];

        for(long long i=0;i<n;i++)

        cin>>a[i];

        vector<vector<string>> p ;

        bool flag[n];

        for(long long i=0;i<n;i++)

            flag[i]=false;

       string temp1,temp2,temp3,temp4;

        for(long long i=0;i<n;i++){

            if(flag[i])continue;

            vector<string> q;

             temp1 = a[i].substr(1);

             q.push_back(temp1);

             temp2 = a[i][0];

             q.push_back(temp2);

            for(long long j=i+1;j<n;j++){

                temp3 = a[j][0];

                temp4 = a[j].substr(1);

                if(temp1==temp4){

                q.push_back(temp3);
                flag[j] = true;

                }

            }

            p.push_back(q);

        }

        long long answer = 0;

        long long answerf = 0;

        for(long long i=0;i<p.size()-1;i++){

            for(long long j = i+1;j<p.size();j++){

                answer = ans(p[i],p[j]);

                answerf += (answer - (p[i].size() -1 ))*(answer - (p[j].size() -1 ));


            }

        }

        cout<<2*answerf<<endl;

    }

    return 0;
}