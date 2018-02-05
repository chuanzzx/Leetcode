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
    vector<vector<int>> levelOrderBottom (TreeNode* root) {
        vector<vector<int>> res;
        if (root != nullptr) { 
            queue<TreeNode*> q;
            q.push (root);
            while (!q.empty()) { // BFS
                int n = q.size();
                vector<int> level;
                for (int i = 0; i < n; i++) {
                    TreeNode* node = q.front();
                    q.pop();
                    if (node->left != nullptr) {
                        q.push (node->left);
                    }
                    if (node->right != nullptr) {
                        q.push (node->right);
                    }
                    level.push_back (node->val);
                }
                res.push_back (level);
            }
            reverse (res.begin(), res.end());
        }
        return res;
    }
};