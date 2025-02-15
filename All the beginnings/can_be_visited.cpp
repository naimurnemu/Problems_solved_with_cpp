#include <bits/stdc++.h>
using namespace std;

const int N = 105;
vector<int> mat[N];
bool vis[N];

void dfs(int src, int &count)
{
  vis[src] = true;
  count++;
  for (int child : mat[src])
  {
    if (!vis[child])
      dfs(child, count);
  }
}

int main()
{
  int n, e;
  cin >> n >> e;

  while (e--)
  {
    int a, b;
    cin >> a >> b;
    mat[a].push_back(b);
    mat[b].push_back(a);
  }

  int src;
  cin >> src;

  int count = 0;
  memset(vis, false, sizeof(vis));
  dfs(src, count);

  cout << count;

  return 0;
}
