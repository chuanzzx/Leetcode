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
    TreeNode* mergeTrees (TreeNode* t1, TreeNode* t2) {
        if (t1 != nullptr && t2 != nullptr) {
            TreeNode *mT = new TreeNode (t1->val + t2->val);
            mT->left  = mergeTrees (t1->left, t2->left);
            mT->right = mergeTrees (t1->right, t2->right);
            return mT;
        }
        return (t1 == nullptr) ? t2 : t1;
    }
};