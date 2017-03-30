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
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        if (root != nullptr) {
            res = max (diameterOfBinaryTree (root->left), diameterOfBinaryTree (root->right));
            res = max (res, calSinglePath (root->left) + calSinglePath (root->right));
        }
        return res;
    }
    
    int calSinglePath (TreeNode *root) {
        if (root == nullptr)
            return 0;
        return 1 + max (calSinglePath (root->left), calSinglePath (root->right));
    }
};