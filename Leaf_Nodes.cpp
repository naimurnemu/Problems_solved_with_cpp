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

void find_leaf_node(Node *root, vector<int> &list_of_leaf)
{
  if (root == NULL)
    return;

  if (root->left == NULL && root->right == NULL)
  {
    list_of_leaf.push_back(root->val);
  }

  find_leaf_node(root->left, list_of_leaf);
  find_leaf_node(root->right, list_of_leaf);
}

int main()
{
  Node *root = input_level_tree();

  vector<int> list_of_leaf;
  find_leaf_node(root, list_of_leaf);

  sort(list_of_leaf.begin(), list_of_leaf.end(), greater<int>());

  for (int val : list_of_leaf)
  {
    cout << val << " ";
  }

  return 0;
}
