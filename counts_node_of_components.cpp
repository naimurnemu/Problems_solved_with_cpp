#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<int> mat[N];
bool vis[N];

void dfs(int src, int &count) {
  vis[src] = true;
  count++;
  for (int child : mat[src])
  {
    if(!vis[child]) {
      dfs(child, count);
    }
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

  memset(vis, false, sizeof(vis));
  int count;
  vector<int> list;
  for (int i = 0; i < n; i++)
  {
    if(!vis[i]) {
      count = 0;
      dfs(i, count);
      list.push_back(count);
    }
  }

  sort(list.begin(), list.end());
  
  for (int i = 0; i < list.size(); i++)
  {
    cout << list[i] << " ";
  }
  

  return 0;
}
