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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if (root == nullptr)
            return res;
        if (root->left != nullptr)
            addPath (root->left, to_string (root->val), res);
        if (root->right != nullptr)
            addPath (root->right, to_string (root->val), res);
        if (root->left == nullptr && root->right == nullptr)
            res.push_back (to_string (root->val));
        return res;
    }
    
    void addPath (TreeNode *root, string path, vector<string> &res) {
        if (root->left != nullptr)
            addPath (root->left, path + "->" + to_string (root->val), res);
        if (root->right != nullptr)
            addPath (root->right, path + "->" + to_string (root->val), res);
        if (root->left == nullptr && root->right == nullptr)
            res.push_back (path + "->" + to_string (root->val));
    }
    
};