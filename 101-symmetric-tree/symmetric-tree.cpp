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
    void helper(TreeNode* a, TreeNode* b, int &iden){
        if(iden == 0) return;
        if(!a && !b) return;
        if((!a && b) || (a && !b)) {iden = 0; return;}
        if(a->val != b->val) {iden = 0; return;}

        helper(a->left, b->right, iden);
        helper(a->right, b->left, iden);

    }
    bool isSymmetric(TreeNode* root) {
        int iden = 1;
        helper(root->left, root->right, iden);
        return iden == 1;
    }
};