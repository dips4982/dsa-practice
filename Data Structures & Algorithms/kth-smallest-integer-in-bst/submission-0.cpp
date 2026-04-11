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
    int ans = -1;
    int kthSmallest(TreeNode* root, int k) {
        int depth=0;
        inOrder(root,depth,k);
        return ans;
    }

    void inOrder(TreeNode* root, int &depth, int k) {
        if(root){
            inOrder(root->left, depth, k);
            depth++;
            if(depth==k) {
                ans=root->val;
            }
            inOrder(root->right, depth, k);
        }
        
    }
};
