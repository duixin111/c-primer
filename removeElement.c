/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL)
        return NULL;
    while (head != NULL)
    {
        if (head->val == val)
            head = head->next;
        else
            break;
    }
    if (head == NULL)
        return NULL;
    struct ListNode* temp = head;
    struct ListNode* prev = NULL;
    while (temp != NULL && temp->next != NULL)
    {
        prev = temp;
        if (temp->next->val == val)
            temp->next = temp->next->next;
        else
            temp = temp->next;
    }
    if (temp != NULL && temp->val == val)
        prev->next = NULL;

    return head;
}