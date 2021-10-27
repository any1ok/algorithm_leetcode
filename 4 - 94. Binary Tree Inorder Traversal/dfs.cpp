class Solution {
public:
    vector<int> ans;
    void inorderTraversalR(TreeNode* root) {
        if (!root)  return;
        if (root->left) {
            inorderTraversal(root->left); // ���� ���� ������
        }
        ans.push_back(root->val);  // �����鼭
        if (root->right) {  
            inorderTraversalR(root->left); //�����ʲ���
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        inorderTraversalR(root);
        return ans;
    }
};