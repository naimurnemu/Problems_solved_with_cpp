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

void print_left(Node *root)
{
  if (root == NULL)
    return;

  if (root->left != NULL)
    print_left(root->left);
  else
    print_left(root->right);

  cout << root->val << " ";
}

void print_right(Node *root)
{
  if (root == NULL)
    return;

  cout << root->val << " ";
  if (root->right != NULL)
    print_right(root->right);
  else
    print_right(root->left);
}

void print_outer_nodes(Node *root)
{
  if (root == NULL)
    return;
  print_left(root->left);
  cout << root->val << " ";
  print_right(root->right);
}

int main()
{
  Node *root = input_level_tree();
  print_outer_nodes(root);
  return 0;
}
