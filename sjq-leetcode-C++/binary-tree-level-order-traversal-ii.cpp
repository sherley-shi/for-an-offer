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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL) return res;
        queue<TreeNode*> tree;
        tree.push(root);
        while(!tree.empty()){
            vector<int> temp;
            for(int i=0; i< tree.size(); i++){
                TreeNode* t = tree.front();
                temp.push_back(t->val);
                if(t->left) tree.push(t->left);
                if(t->right) tree.push(t->right);
                tree.pop();
            }
            res.push_back(temp);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
