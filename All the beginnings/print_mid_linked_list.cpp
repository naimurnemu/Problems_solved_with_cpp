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

void print_mid(Node *head)
{
  int count = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }

  int it = 1;
  if (count % 2)
  {
    while (it <= (count / 2))
    {
      head = head->next;
      it++;
    }
    cout << head->value;
  }
  else
  {
    while (it < (count / 2))
    {
      head = head->next;
      it++;
    }
    cout << head->value<< " ";
    cout << head->next->value;
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

  print_mid(head);

  return 0;
}