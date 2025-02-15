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

void get_inputs(Node *&head)
{
  Node *tail = NULL;
  while (true)
  {
    int value;
    cin >> value;
    if (value == -1)
      break;
    insert_at_tail(head, tail, value);
  }
}

void get_compare_same(Node *head1, Node *head2)
{
  int size_1 = get_size(head1);
  int size_2 = get_size(head2);

  bool is_same = true;
  if (size_1 == size_2)
    for (int i = 0; i < size_1; i++)
    {
      if (head1->value != head2->value)
      {
        is_same = false;
      }
      head1 = head1->next;
      head2 = head2->next;
    }
  else
    is_same = false;

  is_same ? cout << "YES" : cout << "NO";
}

int main()
{
  Node *head_1 = NULL;
  Node *head_2 = NULL;

  get_inputs(head_1);
  get_inputs(head_2);

  get_compare_same(head_1, head_2);

  return 0;
}