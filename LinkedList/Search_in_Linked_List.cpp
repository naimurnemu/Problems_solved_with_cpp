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

void insert_item(Node *&head, Node *&temp, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    temp = newNode;
    return;
  }
  temp->next = newNode;
  temp = temp->next;
}

bool search(Node *head, int item)
{
  bool flag = false;
  while (head != NULL)
  {
    if (head->value == item)
    {
      flag = true;
      break;
    }
    head = head->next;
  }
  return flag;
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

  if (search(head, item))
  {
    cout << "Get the item" << endl;
  }
  else
  {
    cout << "Not Found" << endl;
  }

  return 0;
}