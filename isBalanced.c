/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int getHeight(struct TreeNode* cur) {
    // 当前节点为空，返回当前节点的高度为0 
    if (!cur) {
        return 0;
    }
    // 判断左子树的高度，若其不为平衡二叉树，返回-1 
    int left = getHeight(cur->left);
    if (left == -1) {
        return -1;
    }
    // 判断右子树的高度，若其不为平衡二叉树，返回-1     
    int right = getHeight(cur->right);
    if (right == -1) {
        return -1;
    }
    // 左右子树均为平衡二叉树，判断当前节点是否平衡，是返回其高度，否返回-1
    return abs(right - left) > 1 ? -1 : 1 + fmax(right, left);
}

bool isBalanced(struct TreeNode* root) {
    // 递归判断当前树是否平衡
    return getHeight(root) == -1 ? false : true;
}
