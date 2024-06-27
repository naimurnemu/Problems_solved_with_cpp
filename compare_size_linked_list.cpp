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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}

void take_input(Node *&head, Node *&tail)
{
  while (true)
  {
    int value;
    cin >> value;
    if (value == -1)
      break;
    insert_at_tail(head, tail, value);
  }
}

int size_of(Node *head)
{
  int count = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }

  return count;
}

int main()
{
  Node *head1 = NULL;
  Node *tail1 = NULL;
  take_input(head1, tail1);

  Node *head2 = NULL;
  Node *tail2 = NULL;
  take_input(head2, tail2);

  int size1 = size_of(head1);
  int size2 = size_of(head2);

  if (size1 == size2)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
