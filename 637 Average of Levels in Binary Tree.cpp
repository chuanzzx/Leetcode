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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        q.push (root);

        while (!q.empty()) { // BFS
            double level = 0.0;
            int n = q.size(), levelN = 0; // size is increasing
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                if (node != nullptr) {
                    level += node->val;
                    q.push (node->left);
                    q.push (node->right);
                    levelN++;
                }
                q.pop();
            }
            // cal level value
            if (levelN != 0) {
                res.push_back (level / levelN);
            }
        }
        return res;
    }
    

};