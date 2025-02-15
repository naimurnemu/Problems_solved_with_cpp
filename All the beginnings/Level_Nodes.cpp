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

void print_exact_level(Node *root, int level)
{
  if (root == NULL)
  {
    cout << "Invalid";
    return;
  }

  queue<Node *> q;
  q.push(root);
  int current = 0;

  while (!q.empty())
  {
    int count = q.size();
    if (current == level)
    {
      while (count)
      {
        Node *node = q.front();
        q.pop();
        cout << node->val << " ";
        count--;
      }
      return;
    }

    while (count)
    {
      Node *node = q.front();
      q.pop();
      if (node->left)
        q.push(node->left);
      if (node->right)
        q.push(node->right);
      count--;
    }
    current++;
  }

  cout << "Invalid";
}

int main()
{
  Node *root = input_level_tree();

  int level;
  cin >> level;

  print_exact_level(root, level);

  return 0;
}
