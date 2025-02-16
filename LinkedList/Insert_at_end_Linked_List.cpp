#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

void insert_val(Node *&head, Node *&curr, int val)
{
  Node *newNode = new Node(val);
  if(head == NULL) {
    head = newNode;
    curr = newNode;
    return;
  }
  curr->next = newNode;
  curr = curr->next;
}

void insert_at_tail(Node *tail, int val) {
  Node *newNode = new Node(val);
  tail->next = newNode;
  tail = tail->next;
}

void print(Node *head) {
  while (head != NULL) {
    cout << head->val << " ";
    head = head->next;
  }
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
    insert_val(head, tail, val);
  }

  int item;
  cin >> item;
  insert_at_tail(tail, item);
  
  print(head);

  return 0;
}