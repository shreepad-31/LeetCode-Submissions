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

    void helper(TreeNode* p, TreeNode* q, int &iden){
        if(!q && !p) return;
        if((!q && p) || (q && !p)) {iden = 0; return;}
        if(q->val != p->val) {iden = 0; return;}

        helper(p->left, q->left, iden);
        helper(p->right, q->right, iden);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        int iden = 1;
        helper(p, q, iden);

        return iden == 1;
    }
};