/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
* invert a binary tree.
*/
#include <cstdio>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode *temp;
        if(root == NULL)
        {
            return NULL;
        }
        if(root->left != NULL | root->right != NULL)
        {
            temp = root->left;
            root->left = root->right;
            root->right = temp;
            invertTree(root->left);
            invertTree(root->right);
        }
        return root;
    }
};

