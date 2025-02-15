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

int get_size(Node *head)
{
  Node *temp_head = head;
  int count = 0;
  while (temp_head != NULL)
  {
    count++;
    temp_head = temp_head->next;
  }
  return count;
}

void insert_at_head(Node *&head, Node *&tail, int value)
{
  Node *new_node = new Node(value);
  if (head == NULL)
    tail = new_node;

  new_node->next = head;
  head = new_node;
}

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

void remove_by_index(Node *&head, Node *&tail, int index)
{
  int list_size = get_size(head);
  if (list_size <= index)
    return;

  Node *temp_node = head;

  for (int i = 0; i < index - 1; i++)
    temp_node = temp_node->next;

  if ((list_size - 1) == index)
    tail = temp_node;

  if (index == 0)
  {
    head = temp_node->next;
    delete temp_node;
    return;
  }

  Node *delete_node = temp_node->next;
  temp_node->next = delete_node->next;
  delete delete_node;
}

void print_list(Node *head)
{
  while (head != NULL)
  {
    cout << head->value << " ";
    head = head->next;
  }
  cout << endl;
}

int main()
{
  int steps;
  cin >> steps;

  Node *head = NULL;
  Node *tail = NULL;
  for (int i = 0; i < steps; i++)
  {
    int type, input;
    cin >> type >> input;

    if (type == 0)
      insert_at_head(head, tail, input);
    else if (type == 1)
      insert_at_tail(head, tail, input);
    else if (type == 2)
      remove_by_index(head, tail, input);
      
    print_list(head);
  }

  return 0;
}
