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
    int minDepth(TreeNode* root) {
        if (!root) // NULL
            return 0;
        if (root->left && root->right)
            return (1 + min (minDepth (root->left), minDepth (root->right)));
        else if (root->left)
            return (1 + minDepth (root->left));
        else if (root->right)
            return (1 + minDepth (root->right));
        else // is leaf, 在這裡判斷會比放在一開始判斷 runtime 短 (special case)
            return 1;
    }
};