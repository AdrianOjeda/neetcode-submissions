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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        TreeNode* aux =  root;

        while(aux){
            if(p->val < aux->val and q->val < aux->val){
                aux = aux->left;
            }else if(p->val > aux->val and q->val > aux->val){
                aux = aux->right;
            }else return aux;
        }
        return nullptr;
    }
};
