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
    void helper(TreeNode* root,TreeNode*& head){
        if(!root){
            return;
        }
        helper(root->left,head);
            head->right=new TreeNode(root->val);
            head=head->right;
        helper(root->right,head);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy=new TreeNode(0);
        TreeNode* head=dummy;
        helper(root,head);
        return dummy->right;
    }
};