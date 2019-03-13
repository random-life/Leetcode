#include <stdio.h>
#include<iostream>
#include<vector>
#include <map>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};
class Solution{
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
    ListNode* mergeKList(vector<ListNode*>& lists)
    {
        int nums = lists.size();
        ListNode* result;
        if (lists.empty())
        {
            return nullptr;
        }
    
        while(lists.size()>1)
        {
            lists.push_back(mergeTwoLists(lists[0],lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists.front();
        
    }
};
int main()
{
    vector<ListNode*> p;
    for (int i=0;i<5;i++)
    {
        ListNode s(i);
        p.push_back(&s);
    }
    cout<<p[0]->next;
    system("pause");
    return 0;
}