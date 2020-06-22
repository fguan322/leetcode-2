// Trivial
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        traverse(root, v);
        return v;
    }
private:
    void traverse(TreeNode* root, vector<int> &v) {
        if (root == NULL) {
            return;
        }
        traverse(root->left, v);
        v.push_back(root->val);
        traverse(root->right, v);
    }
};
