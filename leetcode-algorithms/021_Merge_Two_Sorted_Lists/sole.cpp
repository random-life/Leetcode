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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            ListNode* t1 = l1;
    ListNode* t2 = l2;
    ListNode merge(-10000);
    ListNode *t = &merge;
    while(t1&&t2){
        if (t1->val<t2->val)
        {
            t->next = t1;
            t1 = t1->next;
        }
        else{
            t->next = t2;
            t2 = t2->next;
        } 
    t =  t->next;
}
    t->next = t1 ? t1:t2;
    return merge.next;
    }
};