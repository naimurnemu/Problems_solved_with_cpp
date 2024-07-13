#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void insert_at_tail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* newNode = new ListNode(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    void reverse(ListNode*& head, ListNode* current) {
        if (current->next == NULL) {
            head = current;
            return;
        }
        reverse(head, current->next);
        current->next->next = current;
        current->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        ListNode* current = head;
        while (current != NULL) {
            insert_at_tail(newHead, newTail, current->val);
            current = current->next;
        }
        reverse(newHead, newHead);

        ListNode* current_i = head;
        ListNode* current_j = newHead;

        while (current_i != NULL) {
            if (current_i->val != current_j->val) {
                return false;
            }
            current_i = current_i->next;
            current_j = current_j->next;
        }

        return true;
    }
};