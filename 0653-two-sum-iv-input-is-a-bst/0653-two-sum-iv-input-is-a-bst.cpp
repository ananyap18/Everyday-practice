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
private:
    unordered_set<int> value,to_find;
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        bool isPossible = false;
        if(to_find.find(root->val)!=to_find.end() || value.find(k - root->val)!=value.end()) return true;
        value.insert(root->val),to_find.insert(k-root->val);
        if(root->left) isPossible |= findTarget(root->left,k);
        if(root->right) isPossible |= findTarget(root->right,k);
        return isPossible;
    }
};