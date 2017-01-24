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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == 0)
            return 0;
        if (root->left != 0 && root->left->left == 0 && root->left->right == 0) // left leaf
            return (root->left->val + sumOfLeftLeaves (root->right));
        else if (root->left != 0 && root->right != 0) // 如果只寫到這, 不再細分case, runtime會變長
            return (sumOfLeftLeaves (root->right) + sumOfLeftLeaves (root->left));
        else if (root->left != 0 && root->right == 0)
            return (sumOfLeftLeaves (root->left));
        else // (root->left == 0 && root->right != 0)
            return (sumOfLeftLeaves (root->right));
    }
};