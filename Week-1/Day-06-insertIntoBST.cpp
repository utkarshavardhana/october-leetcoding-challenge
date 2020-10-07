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
    void traverse(TreeNode* &root, int val) {
        if(!root) {
            root = new TreeNode(val);
            return;
        }
        if(root->val < val)    traverse(root->right, val);
        else    traverse(root->left, val);
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        traverse(root, val);
        return root;
    }
};
