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
    
    vector <int> v;
    void copy_inOrder(TreeNode* vertex)
    {
        if (vertex != NULL){
            copy_inOrder(vertex->left);
            v.push_back(vertex->val);
            copy_inOrder(vertex->right);
        }        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        copy_inOrder(root);
        
        return v[k-1];
    }
};