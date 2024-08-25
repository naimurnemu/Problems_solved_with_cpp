#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *left;
  Node *right;

  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *input_level_tree()
{
  int val;
  cin >> val;
  if (val == -1)
    return NULL;

  Node *root = new Node(val);
  queue<Node *> q;
  q.push(root);
  while (!q.empty())
  {
    Node *p = q.front();
    q.pop();

    int l, r;
    cin >> l >> r;

    if (l != -1)
    {
      p->left = new Node(l);
      q.push(p->left);
    }
    if (r != -1)
    {
      p->right = new Node(r);
      q.push(p->right);
    }
  }
  return root;
}

int find_depth(Node *root)
{
  if (root == NULL)
    return 0;
  int left_depth = find_depth(root->left);
  int right_depth = find_depth(root->right);
  return max(left_depth, right_depth) + 1;
}

int count_nodes(Node *root)
{
  if (root == NULL)
    return 0;
  return 1 + count_nodes(root->left) + count_nodes(root->right);
}

int ideal_nodes(int power)
{
  int total = 1;
  for (int i = 0; i < power; ++i)
  {
    total *= 2;
  }
  return total - 1;
}

int main()
{
  Node *root = input_level_tree();
  int depth = find_depth(root);
  int total_nodes = count_nodes(root);

  if (total_nodes == ideal_nodes(depth))
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
