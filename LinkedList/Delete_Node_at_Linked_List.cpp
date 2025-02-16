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

void insert_item(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}

void find_to_delete(Node *&head, int item)
{
  if (head == NULL) return; // Handle empty list case

  Node *temp = head;
  Node *prev = NULL;

  while (temp != NULL)
  {
    if (temp->value == item)
    {
      if (prev == NULL) 
      {
        head = temp->next;
      }
      else
      {
        prev->next = temp->next;
      }
      delete temp;
      return; 
    }
    prev = temp;
    temp = temp->next;
  }
}

void print(Node *head)
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
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  Node *head = NULL; 
  Node *tail = NULL; 

  while (true)
  {
    int val;
    cin >> val;
    if (val == -1)
      break;
    insert_item(head, tail, val);
  }

  int item;
  cin >> item;
  find_to_delete(head, item); 

  print(head);

  return 0;
}
