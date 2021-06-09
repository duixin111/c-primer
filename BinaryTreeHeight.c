/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root) {
	if (root == NULL)
		return 0;

	int leftHeight = maxDepth(root->left);
	int rightHight = maxDepth(root->right);

	return leftHeight > rightHight ? leftHeight + 1 : rightHight + 1;
}