/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
    bool chkPalindrome(ListNode* A) {
        // write code here
        if (A == NULL)
            return false;
        ListNode* fast = A;
        ListNode* slow = A;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;    //中间节点
        }
        ListNode* prev = NULL;
        ListNode* cur = slow;
        while (cur)
        {
            ListNode* NewHead = cur->next;
            cur->next = prev;
            prev = cur;
            cur = NewHead;
        }
        while (A && prev)
        {
            if (A->val != prev->val)
                return false;
            A = A->next;
            prev = prev->next;
        }

        return true;
    }
};