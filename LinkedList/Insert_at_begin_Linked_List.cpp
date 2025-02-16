#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *Next;
  Node(int val)
  {
    this->val = val;
    this->Next = NULL;
  }
};

void insert(Node *&head, Node *&temp, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    temp = newNode;
    return;
  }
  temp->Next = newNode;
  temp = temp->Next;
}

void insert_at_begin(Node *&head, int item) {
  Node *newNode = new Node(item);
  newNode->Next = head;
  head = newNode;
}

void print(Node *head) {
  while(head != NULL) {
    cout << head->val << " ";
    head = head->Next;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  Node *head = NULL;
  Node *tail = NULL;

  while (1)
  {
    int val;
    cin >> val;
    if(val == -1) break;
    insert(head, tail, val);
  }

  int item;
  cin >> item;
  insert_at_begin(head, item);

  print(head);
  return 0;
}