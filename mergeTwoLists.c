/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode ListNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (l1 == NULL && l2 == NULL)
        return l2;
    ListNode* head = (ListNode*)malloc(sizeof(ListNode));
    ListNode* t = head;
    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            t->next = l1;
            l1 = l1->next;
        }
        else
        {
            t->next = l2;
            l2 = l2->next;
        }
        t = t->next;
    }
    if (l1)
        t->next = l1;
    else
        t->next = l2;
    ListNode* tmp = head->next;
    free(head);
    return tmp;
}