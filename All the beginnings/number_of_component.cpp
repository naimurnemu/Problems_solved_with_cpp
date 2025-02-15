#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<int> mat[N];
bool vis[N];

void dfs(int src)
{
  vis[src] = true;

  for (int child : mat[src])
  {
    if (!vis[child])
    {
      dfs(child);
    }
  }
}

int main()
{
  int n , e;
  cin >> n >> e;

  while (e--)
  {
    int a ,b;
    cin >> a >> b;
    mat[a].push_back(b);
    mat[b].push_back(a);
  }
  
  memset(vis, false, sizeof(vis));
  int components = 0;
  for (int i = 0; i < n; i++)
  {
    if(!vis[i]) {
      components++;
      dfs(i);
    }
  }

  cout << components;
  
  return 0;
}
