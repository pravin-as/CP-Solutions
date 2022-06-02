#include <bits/stdc++.h>
#include <atcoder/scc>
using namespace std;
using namespace atcoder;
int main(){
  int N, M;
  cin >> N >> M;
  scc_graph G(N);
  for (int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    G.add_edge(a, b);
  }
  vector<vector<int>> ans = G.scc();
  int K = ans.size();
  cout << K << endl;
  for (int i = 0; i < K; i++){
    int l = ans[i].size();
    cout << l;
    for (int j = 0; j < l; j++){
      cout << ' ' << ans[i][j];
    }
    cout << endl;
  }
}