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
    TreeNode* sortedArrayToBST (vector<int>& nums) {
        return buildBST (nums, 0, nums.size() - 1);
    }
    
    TreeNode* buildBST (vector<int>& nums, int begin, int end) {
        if (begin > end) {
            return nullptr;
        }
        int mid = (end - begin) / 2 + begin;
        TreeNode* node = new TreeNode (nums[mid]);
        node->left = buildBST (nums, begin, mid - 1);
        node->right = buildBST (nums, mid + 1, end);
        return node;
    }
};