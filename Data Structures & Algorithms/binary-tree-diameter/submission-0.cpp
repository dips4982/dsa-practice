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

    int ans(TreeNode *root, int &diameter)
    {
        int left=0;
        int right=0;
        if(root->left) {
            left = ans(root->left, diameter);
        }

        if(root->right) {
            right = ans(root->right, diameter);
        }
        
        diameter = max(diameter, left+right+1);
        return max(left,right) + 1;
    }


    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        ans(root,diameter);
        return diameter-1;
    }
};
