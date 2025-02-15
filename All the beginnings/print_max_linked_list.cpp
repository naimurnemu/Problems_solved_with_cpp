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

void print_max(Node* head) {
  int max_value = head->value;

  for (Node * i = head; i->next != NULL; i = i->next)
  {
    max_value = max(i->value, max_value);
  }

  cout << max_value;
  
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

  print_max(head);

  return 0;
}