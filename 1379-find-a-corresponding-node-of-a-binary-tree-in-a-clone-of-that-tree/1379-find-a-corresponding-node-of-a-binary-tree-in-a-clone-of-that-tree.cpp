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
    TreeNode* solve(TreeNode* root, TreeNode* target){
        if(!root) return NULL;
        if(root->val==target->val){
            return root;
        }
        TreeNode* ans1=solve(root->left,target);
        TreeNode* ans2=solve(root->right,target);
        return ans1!=NULL?ans1:ans2;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return solve(cloned,target);
    }
};