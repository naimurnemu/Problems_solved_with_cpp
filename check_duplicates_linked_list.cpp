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
  Node *new_node = new Node(value);
  if (head == NULL)
  {
    head = new_node;
    return;
  }
  Node *last_node = head;
  while (last_node->next != NULL)
  {
    last_node = last_node->next;
  }
  last_node->next = new_node;
}

void check_duplicate_linked_list(Node *head)
{
  bool is_duplicate = false;

  Node *temp = head;
  while (temp != NULL)
  {
    Node *next_temp = temp->next;
    while (next_temp != NULL)
    {
      if(next_temp->value == temp->value) {
        is_duplicate = true;
        break;
      }
      next_temp = next_temp->next;
    }
    temp = temp->next;
  }
  if(is_duplicate) {
    cout << "YES";
  } else {
    cout << "NO";
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
    insert_to_linked_list(head, value);
  }

  check_duplicate_linked_list(head);

  return 0;
}
