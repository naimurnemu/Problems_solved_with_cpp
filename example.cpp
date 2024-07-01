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

int main()
{

  Node *head = NULL;
  Node *tail = NULL;

  Node *new_node = new Node(10);

  if(head == NULL) {
    head = new_node;
    tail = new_node;
  }
  tail->next = new_node;
  tail = new_node;

  Node * current_node = head;
  while (current_node->next != NULL)
  {
    current_node = current_node->next;
  }

  current_node->next = new_node;

  Node * current_node = head;
  for (int i = 1; i < 3; i++)
  {
    current_node = current_node->next;
  }

  Node *delete_node = head;
  head = delete_node->next;
  

  new_node->next = head;
  head = new_node;
  delete delete_node;

  
  

  return 0;
}
