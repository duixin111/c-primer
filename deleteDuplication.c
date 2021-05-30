/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead) {
        if (pHead == NULL || pHead->next == NULL)
            return pHead;
        ListNode* prev = NULL;
        ListNode* cur = pHead;
        ListNode* next = pHead->next;

        while (next != NULL)
        {
            if (cur->val != next->val)
            {
                prev = cur;
                cur = next;
                next = next->next;
            }
            else
            {
                int val = cur->val;
                while (cur != NULL && cur->val == val)
                {
                    ListNode* del = cur;
                    cur = cur->next;
                    if (cur == NULL)
                        next = NULL;
                    else
                        next = next->next;
                    free(del);
                }
                if (prev == NULL)
                    pHead = cur;
                else
                    prev->next = cur;
            }

        }
        return pHead;
    }
};