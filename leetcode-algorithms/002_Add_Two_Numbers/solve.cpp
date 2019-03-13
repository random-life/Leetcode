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
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
		ListNode* temp2 = l2;
		ListNode* re = new ListNode(0);
        ListNode* n_ew = re;
        
		bool con = false;
		do
		{
			ListNode *temp = new ListNode(0);
			int x = 0;
			if(con)
			{
				if(l1==NULL)
				{
					x = l2->val+1;
                    l2 = l2->next;
				}
				else if(l2==NULL)
				{
					x = l1->val+1;
                    l1 = l1->next;
				}
				else
                {
				    x = l1->val+l2->val+1;
                    l1 = l1->next;
                    l2 = l2->next;
                }

			}
			else
			{
				if(l1==NULL)
				{
					x = l2->val;
                    l2 = l2->next;
				}
				else if(l2==NULL)
				{
					x = l1->val;
                    l1 = l1->next;
				}
				else
                {x = l1->val+l2->val;
                    l1 = l1->next;
                    l2 = l2->next;}
			}
			
			if(x>=10)
			{
				x = x-10;
				con = true;
			}
			else
			{
				con = false;
			}
			temp->val = x;
            n_ew->next = temp;
            n_ew = temp;
			
            cout<<temp->val<<endl;

			
			
            cout<<re->val<<endl;

		}while(l1!=NULL||l2!=NULL);
        if (con)
        {
            ListNode *temp = new ListNode(1);
            n_ew->next = temp;
        }
		return re->next;
	}
		
    
};