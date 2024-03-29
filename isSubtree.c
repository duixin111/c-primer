/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool compare(struct TreeNode* root1, struct TreeNode* root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    if (root1->val != root2->val)
        return false;
    return compare(root1->left, root2->left) && compare(root1->right, root2->right);
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
    if (root == NULL && subRoot != NULL)
        return false;
    return compare(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}