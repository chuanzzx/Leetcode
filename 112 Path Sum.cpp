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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == 0)
            return false;
        if (sum - root->val == 0 && root->left == 0 && root->right == 0)
            return true;
        if (root->left == 0)
            return hasPathSum (root->right, sum - root->val);
        else if (root->right == 0)
            return hasPathSum (root->left, sum - root->val);
        else // If we use this case only, the runtime will be longer.
            return (hasPathSum (root->left, sum - root->val) || hasPathSum (root->right, sum - root->val));
    }
};