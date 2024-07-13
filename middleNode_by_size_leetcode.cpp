/**
 * Definition for singly-linked list.

 */

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

class Solution
{
public:
    int get_size(ListNode *head)
    {
        int count = 0;
        ListNode *current = head;
        while (current != NULL)
        {
            count++;
            current = current->next;
        }

        return count;
    }

    ListNode *middleNode(ListNode *head)
    {
        int list_size = get_size(head);
        ListNode *current = head;
        for (int i = 1; i <= list_size / 2; i++)
        {
            current = current->next;
        }
        return current;
    }
};