/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(res,root);
        return res;
    }
    void inorder(vector<int>& res,TreeNode* root)
    {
        stack<TreeNode*> s ;
        TreeNode* cur=root;
        while(cur||!s.empty())
        {
            while(cur)
            {
                s.push(cur);
                cur = cur->left;
            }
            TreeNode* top = s.top();
            res.push_back(top->val);
            s.pop();
            cur = top->right;
        }
    }
};