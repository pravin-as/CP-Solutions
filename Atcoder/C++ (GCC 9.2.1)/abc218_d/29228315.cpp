
// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;
 
// Function to find number of possible rectangles
int countRectangles(vector<pair<int, int> >& ob)
{
 
    // Creating TreeSet containing elements
    set<pair<int, int> > it;
 
    // Inserting the pairs in the set
    for (int i = 0; i < ob.size(); ++i) {
        it.insert(ob[i]);
    }
 
    int ans = 0;
    for (int i = 0; i < ob.size(); ++i)
    {
        for (int j = 0; j < ob.size(); ++j)
        {
            if (ob[i].first != ob[j].first
                && ob[i].second != ob[j].second)
            {
               
                // Searching the pairs in the set
                if (it.count({ ob[i].first, ob[j].second })
                    && it.count(
                        { ob[j].first, ob[i].second }))
                {
                   
                    // Increase the answer
                    ++ans;
                }
            }
        }
    }
 
    // Return the final answer
    return ans / 4;
}
 
// Driver Code
int main()
{
 
    int N; cin >> N;
    vector<pair<int, int> > ob(N);
 
    // Inserting the pairs
    for(int i = 0; i < N; i++){
        int a, b; cin >> a >> b;
        ob[i] = {a, b};
    }
 
    cout << countRectangles(ob);
 
    return 0;
}