#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> queries;deque<int> nums;

    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        nums.push_back(v);
    }

      while(q>0){
            int pp;
            cin>>pp;
        for(int j=0;j<n;j++){
            if(nums[j]==pp){
                cout<<j+1<<' ';
                nums.erase(nums.begin()+j);
                nums.push_front(pp);
                break;
            }
        }
        q--;}

}
