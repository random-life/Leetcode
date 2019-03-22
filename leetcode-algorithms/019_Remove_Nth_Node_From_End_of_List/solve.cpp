/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
   int m = 0;
    ListNode* t = head;
    while(t != NULL)
    {
        m++;
        t = t->next;
    }
    t = head;
    int realn =  m-n;
    if (realn==1)
        {
            head->next = head->next->next;
            return head;
        }
    while(realn > 1)
    {
        t = t->next;
        realn--;
    }
    if (t->next!=NULL&&t!=head)
        t->next = t->next->next;
    else if(t == head)
        {head = t->next;
        }
    else if (t->next == NULL&&t!=head)
        head = NULL;
    return head;
    }
    
};