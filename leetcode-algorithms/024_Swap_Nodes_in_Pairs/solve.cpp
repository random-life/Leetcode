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
    ListNode* swapPairs(ListNode* head) {
        if (head==0||head->next==0)
            return head;
        ListNode *temp = head, *t,*t2=head;
        ListNode *re = head->next;
        while(1)
        {
            if (temp->next==0)
                break;
            //cout<<temp->val<<endl;
            t2->next = temp->next;
            t2 = temp;
            
            t= temp->next;
            temp->next = temp->next->next;
            t->next = temp;
            temp = temp->next;
            if (temp==0)
                break;
        }
        return re;
    }
};