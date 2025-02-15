#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int n, m;
  bool vis[100][100];
  vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
  bool isValid(int ci, int cj)
  {
    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
  }

  void dfs(int si, int sj, vector<vector<int>> &grid, int originalColor, int color)
  {
    vis[si][sj] = true;
    grid[si][sj] = color;

    for (int i = 0; i < 4; i++)
    {
      int ci = si + d[i].first;
      int cj = sj + d[i].second;
      if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == originalColor)
      {
        dfs(ci, cj, grid, originalColor, color);
      }
    }
  }

  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                int color)
  {
    n = image.size();
    m = image[0].size();
    int originalColor = image[sr][sc];

    // if (originalColor == color) {
    //     return image;
    // }

    memset(vis, false, sizeof(vis));

    dfs(sr, sc, image, originalColor, color);
    return image;
  }
};