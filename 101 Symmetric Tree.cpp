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
    bool isSymmetric (TreeNode* root) {
        return (root == nullptr) ? true : calSym (root->left, root->right);
    }
    
    bool calSym (TreeNode *l, TreeNode *r) {
        if (l == nullptr && r == nullptr)
            return true;
        else if (l == nullptr || r == nullptr)
            return false;
        else
            return ((l->val == r->val) && calSym (l->left, r->right) && calSym (l->right, r->left));
    }
};