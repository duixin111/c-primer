/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    int A = 0, B = 0;
    ListNode* ptrA = headA, * ptrB = headB;
    while (ptrA)
    {
        ptrA = ptrA->next;
        ++A;
    }
    while (ptrB)
    {
        ptrB = ptrB->next;
        ++B;
    }
    ptrA = headA;
    ptrB = headB;
    if (A > B)
    {
        int x = A - B;
        while (ptrA && x--)
            ptrA = ptrA->next;
        while (ptrA)
        {
            if (ptrA == ptrB)
                return ptrA;
            ptrA = ptrA->next;
            ptrB = ptrB->next;
        }
    }
    else
    {
        int x = B - A;
        while (ptrB && x--)
            ptrB = ptrB->next;
        while (ptrB)
        {
            if (ptrA == ptrB)
                return ptrA;
            ptrA = ptrA->next;
            ptrB = ptrB->next;
        }
    }
    return NULL;
}