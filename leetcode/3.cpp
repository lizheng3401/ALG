/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include <cstdio>
#include <algorithm>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int left, right, maxdepth;
        if( root != NULL)
        {
            left = maxDepth(root->left);
            right = maxDepth(root->right);
            maxdepth = (left > right ? left: right) + 1;
        }else{
            return 0;
        }

        return maxdepth;
    }
};