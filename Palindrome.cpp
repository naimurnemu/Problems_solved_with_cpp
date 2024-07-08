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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
  Node *new_node = new Node(value);
  if (head == NULL)
  {
    head = new_node;
    tail = new_node;
    return;
  }
  new_node->prev = tail;
  tail->next = new_node;
  tail = new_node;
}

void check_palindrome(Node *head, Node *tail)
{
  bool is_palindrome = true;
  int list_size = get_size(head);
  for (int i = 0; i < (list_size / 2); i++)
  {
    if (head->value != tail->value)
    {
      is_palindrome = false;
    }
    head = head->next;
    tail = tail->prev;
  }

  is_palindrome ? cout << "YES" : cout << "NO";
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

  check_palindrome(head, tail);

  return 0;
}
