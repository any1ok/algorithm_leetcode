

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
        inorderTraversalR(root); // 중위순열후
        for (int i = 1; i < ans.size(); i++) { // 잘 sorting 되었는가
            if (ans[i - 1] >= ans[i]) // [2,2,2] 같은거조심
                return false;
        }
        return true;
    }
};