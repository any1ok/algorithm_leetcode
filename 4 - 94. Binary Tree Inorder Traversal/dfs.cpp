class Solution {
public:
    vector<int> ans;
    void inorderTraversalR(TreeNode* root) {
        if (!root)  return;
        if (root->left) {
            inorderTraversal(root->left); // 왼쪽 가다 끝나면
        }
        ans.push_back(root->val);  // 넣으면서
        if (root->right) {  
            inorderTraversalR(root->left); //오른쪽꺼봄
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        inorderTraversalR(root);
        return ans;
    }
};