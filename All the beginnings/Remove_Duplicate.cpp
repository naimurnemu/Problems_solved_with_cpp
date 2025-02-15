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
  Node *new_node = new Node(value);
  if (head == NULL)
  {
    head = new_node;
    tail = new_node;
    return;
  }
  tail->next = new_node;
  tail = new_node;
}

void remove_duplicate(Node *&head)
{
  Node *i = head;
  while (i != NULL && i->next != NULL)
  {
    Node *j = i;
    while (j->next != NULL)
    {
      if (i->value == j->next->value)
      {
        Node *delete_node = j->next;
        j->next = delete_node->next;
        delete delete_node;
      }
      else
      {
        j = j->next;
      }
    }
    i = i->next;
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

  remove_duplicate(head);

  print_list(head);

  return 0;
}
