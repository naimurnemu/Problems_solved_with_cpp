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

int sum_of_tree(Node *root)
{
  if (root == NULL)
    return 0;

  if (root->left == NULL && root->right == NULL)
    return 0;

  int left_sum = sum_of_tree(root->left);
  int right_sum = sum_of_tree(root->right);

  return root->val + left_sum + right_sum;
}

int main()
{
  Node *root = input_level_tree();
  int sum = sum_of_tree(root);

  cout << sum;

  return 0;
}
