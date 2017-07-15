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
    string tree2str (TreeNode *t) {
        return build (t);
    }
    
    string build (TreeNode *r) {
        if (r != nullptr) {
            if (r->left == nullptr && r->right == nullptr) {
                return to_string (r->val);
            } else if (r->right == nullptr) {
                return to_string (r->val) + "(" + build (r->left) + ")";
            } else {
                return to_string (r->val) + "(" + build (r->left) + ")(" + build (r->right) + ")";
            }
        } else {
            return "";
        }
    }
};