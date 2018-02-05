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
    bool isBalanced (TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        int ld = calDepth (root->left);
        int rd = calDepth (root->right);
        bool tag = (ld > rd) ? (ld - rd <= 1) : (rd - ld <= 1);
        return tag && isBalanced (root->left) && isBalanced (root->right);
    }
    
    int calDepth (TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }
        return (1 + max (calDepth (node->left), calDepth (node->right)));
    }
};