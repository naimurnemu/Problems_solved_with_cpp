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

void insert_to_linked_list(Node *&head, int value)
{
  Node *newNode = new Node(value);
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Node *last_node = head;
  while (last_node->next != NULL)
  {
    last_node = last_node->next;
  }
  last_node->next = newNode;
}

void count_size_linked_list(Node *head)
{
  if (head == NULL)
  {
    cout << 0;
    return;
  }
  int size = 1;
  Node *last_node = head;
  while (last_node->next != NULL)
  {
    size++;
    last_node = last_node->next;
  }

  cout << size;
}

int main()
{
  Node *head = NULL;
  while (true)
  {
    int value;
    cin >> value;
    if (value == -1)
    {
      break;
    }
    else
    {
      insert_to_linked_list(head, value);
    }
  }
  count_size_linked_list(head);

  return 0;
}
