#include <bits/stdc++.h>
using namespace std;
#define int long long 

int n, m;
 
// Function that returns true if matrix1
// can be converted to matrix2
// with the given operation
bool check(vector<vector<int>> a, vector<vector<int>> b)
{
 
    // Traverse all the diagonals
    // starting at first column
    for (int i = 0; i < n; i++) {
        vector<int> v1, v2;
        int r = i;
        int col = 0;
 
        // Traverse in diagonal
        while (r >= 0 && col < m) {
 
            // Store the diagonal elements
            v1.push_back(a[r][col]);
            v2.push_back(b[r][col]);
 
            // Move up
            r--;
            col++;
        }
 
        // Sort the elements
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
 
        // Check if they are same
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] != v2[i])
                return false;
        }
    }
 
    // Traverse all the diagonals
    // starting at last row
    for (int j = 1; j < m; j++) {
        vector<int> v1, v2;
        int r = n - 1;
        int col = j;
 
        // Traverse in the diagonal
        while (r >= 0 && col < m) {
 
            // Store diagonal elements
            v1.push_back(a[r][col]);
            v2.push_back(b[r][col]);
            r--;
            col++;
        }
 
        // Sort all elements
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
 
        // Check for same
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] != v2[i])
                return false;
        }
    }
 
    // If every element matches
    return true;
}
 
// Driver code
int32_t main()
{
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int>(m,0)), b(n,vector<int>(m,0));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }
 
    if (check(a, b))
        cout << "Yes";
    else
        cout << "No";
 
    return 0;
}