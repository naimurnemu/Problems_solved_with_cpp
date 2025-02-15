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

void insert(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = tail->next;
}

int length(Node *head)
{
  int count = 0;
  while (head != NULL)
  {
    count++;
    head = head->next;
  }
  return count;
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
    insert(head, tail, val);
  }

  cout << length(head);

  return 0;
}