#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int value;
  Node *link;
  Node(int value)
  {
    this->value = value;
    this->link = NULL;
  }
};

void insert_at_tail(Node *&head, Node *&tail, int value)
{
  Node *new_node = new Node(value);
  if (head == NULL)
  {
    head = new_node;
    tail = new_node;
    return;
  }
  tail->link = new_node;
  tail = new_node;
}

void get_difference(Node *head)
{
  Node *link = head;
  int count = 0;
  while (link != NULL)
  {
    count++;
    link = link->link;
  }

  link = head;
  int mx_value = head->value;
   while (link != NULL)
  {
    mx_value = max(link->value, mx_value);
    link = link->link;
  }

  link = head;
  int mn_value = head->value;
   while (link != NULL)
  {
    mn_value = min(link->value, mn_value);
    link = link->link;
  }

  cout << mx_value - mn_value;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  while (true)
  {
    int value;
    cin >> value;
    if (value == -1)
      break;
    insert_at_tail(head, tail, value);
  }

  get_difference(head);

  return 0;
}
