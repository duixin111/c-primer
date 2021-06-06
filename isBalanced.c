/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int getHeight(struct TreeNode* cur) {
    // ��ǰ�ڵ�Ϊ�գ����ص�ǰ�ڵ�ĸ߶�Ϊ0 
    if (!cur) {
        return 0;
    }
    // �ж��������ĸ߶ȣ����䲻Ϊƽ�������������-1 
    int left = getHeight(cur->left);
    if (left == -1) {
        return -1;
    }
    // �ж��������ĸ߶ȣ����䲻Ϊƽ�������������-1     
    int right = getHeight(cur->right);
    if (right == -1) {
        return -1;
    }
    // ����������Ϊƽ����������жϵ�ǰ�ڵ��Ƿ�ƽ�⣬�Ƿ�����߶ȣ��񷵻�-1
    return abs(right - left) > 1 ? -1 : 1 + fmax(right, left);
}

bool isBalanced(struct TreeNode* root) {
    // �ݹ��жϵ�ǰ���Ƿ�ƽ��
    return getHeight(root) == -1 ? false : true;
}
