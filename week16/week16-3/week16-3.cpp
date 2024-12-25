/// week16-3.cpp
/// LeetCode 94. Binary Tree Inorder Traversal
class Solution {
public:
    void helper(TreeNode* root, vector<int>& ans){ /// �禡�I�s�禡
        if(root == nullptr) return ; /// �פ���� terminal condition

        helper(root -> left, ans); /// ���b��
        ans.push_back(root -> val); /// �뤤��
        helper(root -> right, ans); /// �k�b��
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans; /// �ǳ� ans ����
        helper(root, ans); /// �禡�I�s�禡 �⵪�׺�X�ӡA��Jans
        return ans; /// ans ��X�h
    }
};
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
