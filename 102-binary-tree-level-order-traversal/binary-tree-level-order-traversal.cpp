/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if (!root)
        {
            return {};
        }
        vector<vector<int>> ans;

        queue<TreeNode*> q;

        q.push(root);

        while ( !q.empty())
        {
           
            int n = q.size();
            vector<int> tmpans;

            for(int i=0 ; i < n ;i++)
            {
                TreeNode* tmp = q.front();
                tmpans.push_back(tmp->val);

                q.pop();


                if (tmp->left) q.push(tmp->left);
                if (tmp->right) q.push(tmp->right);

            }
            ans.push_back(tmpans);
        
        }

        return ans;


        
    }
};