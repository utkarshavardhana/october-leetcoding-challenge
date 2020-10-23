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
    void traverse(TreeNode* root, int depth, int& mn) {
        if(!root)   return;
        depth++;
        if(!root->left and !root->right)   mn = min(mn, depth);
        traverse(root->left, depth, mn);
        traverse(root->right, depth, mn);
    }
    int minDepth(TreeNode* root) {
        int mn = INT_MAX;
        traverse(root, 0, mn);
        return (mn == INT_MAX) ? 0 : mn;
    }
};
