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

void get_index(Node *head, int key)
{
  Node *temp_head = head;
  int count = 0;
  while (temp_head != NULL)
  {
    count++;
    temp_head = temp_head->next;
  }

  bool is_found = false;
  temp_head = head;
  for (int i = 0; i < count; i++)
  {
    if (temp_head->value == key)
    {
      is_found = true;
      cout << i << endl;
      break;
    }
    temp_head = temp_head->next;
  }

  if (!is_found)
  {
    cout << -1 << endl;
  }
}

int main()
{
  int steps;
  cin >> steps;
  for (int i = 0; i < steps; i++)
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

    int query;
    cin >> query;

    get_index(head, query);
  }

  return 0;
}
