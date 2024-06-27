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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
  Node *newNode = new Node(value);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  tail->next = newNode;
  tail = newNode;
}

void sort_acdending(Node *&head)
{
  for (Node *i = head; i->next != NULL; i = i->next)
  {
    for (Node *j = i->next; j != NULL; j = j->next)
    {
      if (i->value < j->value)
        swap(i->value, j->value);
    }
  }
}

void print_list(Node *head)
{
  while (head != NULL)
  {
    cout << head->value << " ";
    head = head->next;
  }
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

  sort_acdending(head);

  print_list(head);

  return 0;
}