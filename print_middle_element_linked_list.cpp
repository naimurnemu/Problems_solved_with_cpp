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

int count_size_linked_list(Node *head)
{
  if (head == NULL)
  {
    return 0;
  }
  int size = 1;
  Node *last_node = head;
  while (last_node->next != NULL)
  {
    size++;
    last_node = last_node->next;
  }
  return size;
}

void print_middle_element(Node *head, int size)
{
  Node *temp = head;
  if (size % 2)
  {
    for (int i = 1; i <= size / 2; i++) temp = temp->next;
    cout << temp->value;
  }
  else
  {
    for (int i = 1; i < size / 2; i++) temp = temp->next;
    cout << temp->value << " ";
    cout << temp->next->value;
  }
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
  int size = count_size_linked_list(head);

  print_middle_element(head, size);

  return 0;
}
