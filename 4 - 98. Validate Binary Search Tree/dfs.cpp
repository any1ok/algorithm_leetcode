

class Solution {
public:
    vector<int> ans;
    void inorderTraversalR(TreeNode* root) {
        if (!root)  return;
        if (root->left) {
            inorderTraversalR(root->left);
        }
        ans.push_back(root->val);
        if (root->right) {
            inorderTraversalR(root->right);
        }
    }

    bool isValidBST(struct TreeNode* root) {
        inorderTraversalR(root);
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i - 1] >= ans[i])
                return false;
        }
        return true;
    }
};