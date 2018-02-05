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
    int pathSum (TreeNode* root, int sum) {
        if (!root) {
            return 0;
        }
        return calSum (root, sum, 0) + pathSum (root->left, sum) + pathSum (root->right, sum);
    }
    
private:
    int calSum (TreeNode* root, int &sum, int tmp) {
        if (!root) {
            return 0;
        }
        tmp += root->val;
        if (tmp == sum) {
            return 1 + calSum (root->left, sum, tmp) + calSum (root->right, sum, tmp);
        } else {
            return calSum (root->left, sum, tmp) + calSum (root->right, sum, tmp);
        }
    }
};