/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
bool hasCycle(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return false;
    ListNode* fast = head->next;
    ListNode* slow = head;
    while (fast != slow)
    {
        if (fast == NULL || fast->next == NULL)
            return false;
        fast = fast->next->next;
        slow = slow->next;
    }
    return true;

}