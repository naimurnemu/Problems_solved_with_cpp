#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int value;
  Node *next;
  Node(int value)
  {
    this->value = value;
    this->next = NULL;
  }
};

void insert_value(Node *&head, Node *&curr, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    curr = newNode;
    return;
  }
  curr->next = newNode;
  curr = curr->next;
}

void print(Node *head)
{
  while (head != NULL)
  {
    cout << head->value << " ";
    head = head->next;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  Node *head = NULL;
  Node *tail = NULL;

  while (true)
  {
    int val;
    cin >> val;
    if (val == -1)
      break;
    insert_value(head, tail, val);
  }
  print(head);

  return 0;
}