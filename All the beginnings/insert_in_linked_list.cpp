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

void insert_at_position(Node *&head, int position, int value)
{
  Node *newNode = new Node(value);
  if (position == 0)
  {
    newNode->next = head;
    head = newNode;
  }
  else
  {
    Node *currentNode = head;
    for (int i = 1; i < position; i++)
    {
      if(currentNode->next == NULL) {
        cout << "Invalid" << endl;
        return;
      }
      currentNode = currentNode->next;
    }
    Node *temp = currentNode->next;
    currentNode->next = newNode;
    newNode->next = temp;
  }

  Node *last_node = head;
  while (last_node != NULL) 
  {
    cout << last_node->value << " ";
    last_node = last_node->next;
  }
  cout << endl;
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

  int queries;
  cin >> queries;

  for (int i = 0; i < queries; i++)
  {
    int position, value;
    cin >> position >> value;
    insert_at_position(head, position, value);
  }

  return 0;
}