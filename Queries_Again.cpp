#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int value;
  Node *prev;
  Node *next;
  Node(int value)
  {
    this->value = value;
    this->prev = NULL;
    this->next = NULL;
  }
};

int get_size(Node *head)
{
  int count = 0;
  Node *current = head;
  while (current != NULL)
  {
    count++;
    current = current->next;
  }
  return count;
}

void print_list(Node *head)
{
  Node *current = head;
  cout << "L -> ";
  while (current != NULL)
  {
    cout << current->value << " ";
    current = current->next;
  }
  cout << endl;
}

void print_reverse(Node *tail)
{
  Node *current = tail;
  cout << "R -> ";
  while (current != NULL)
  {
    cout << current->value << " ";
    current = current->prev;
  }
  cout << endl;
}

void insert_at_position(Node *&head, Node *&tail, int pos, int value)
{
  Node *new_node = new Node(value);
  if (pos == 0)
  {
    if (head == NULL)
    {
      head = new_node;
      tail = new_node;
    }
    else
    {
      new_node->next = head;
      head->prev = new_node;
      head = new_node;
    }
  }
  else
  {
    Node *current = head;
    for (int i = 0; i < pos - 1 && current != NULL; i++)
    {
      current = current->next;
    }
    if (current != NULL)
    {
      new_node->next = current->next;
      if (current->next != NULL)
      {
        current->next->prev = new_node;
      }
      current->next = new_node;
      new_node->prev = current;
      if (new_node->next == NULL)
      {
        tail = new_node;
      }
    }
  }

  print_list(head);
  print_reverse(tail);
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int times;
  cin >> times;
  for (int i = 0; i < times; i++)
  {
    int pos, value;
    cin >> pos >> value;
    int list_size = get_size(head);
    if (pos <= list_size)
    {
      insert_at_position(head, tail, pos, value);
    }
    else
    {
      cout << "Invalid" << endl;
    }
  }

  return 0;
}
