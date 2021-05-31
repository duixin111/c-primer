struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* cur = head;
    struct ListNode* prev = NULL;
    while (cur)
    {
        struct ListNode* NewHead = cur->next;
        cur->next = prev;
        prev = cur;
        cur = NewHead;
    }
    return prev;
}