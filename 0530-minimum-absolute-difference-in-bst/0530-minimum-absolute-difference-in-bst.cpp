/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, int& mini, int& prev)   {
        if(root -> left) inorder(root -> left, mini, prev);
        mini = min(mini, abs(root->val - prev));
        prev = root->val;
        if(root -> right) inorder(root -> right, mini, prev);
    }

    int getMinimumDifference(TreeNode* root) {
        int mini = INT_MAX, prev = INT_MAX;
        inorder(root, mini, prev);
        return mini;
    }
};