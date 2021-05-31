/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */


 /**
  *
  * @param pListHead ListNode类
  * @param k int整型
  * @return ListNode类
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