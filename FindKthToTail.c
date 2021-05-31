/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */


 /**
  *
  * @param pListHead ListNode��
  * @param k int����
  * @return ListNode��
  */
typedef struct ListNode ListNode;
struct ListNode* FindKthToTail(ListNode* pListHead, int k) {
    // write code here
    if (pListHead == NULL)
        return NULL;
    ListNode* fast = pListHead;
    ListNode* slow = pListHead;
    while (k-- && fast != NULL)
    {
        if (fast == NULL)
            return NULL;
        fast = fast->next;

    }
    while (fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;


}