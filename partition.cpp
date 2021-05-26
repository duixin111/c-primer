/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here
        ListNode* head1 = NULL, * tail1 = NULL;
        ListNode* head2 = NULL, * tail2 = NULL;
        head1 = tail1 = (ListNode*)malloc(sizeof(ListNode));
        head2 = tail2 = (ListNode*)malloc(sizeof(ListNode));
        while (pHead)
        {
            if (pHead->val < x)
            {
                tail1->next = pHead;
                pHead = pHead->next;
                tail1 = tail1->next;
            }
            else {
                tail2->next = pHead;
                pHead = pHead->next;
                tail2 = tail2->next;
            }
        }
        tail2->next = NULL;
        tail1->next = head2->next;
        ListNode* tmp = head1->next;
        free(head2);
        free(head1);
        return tmp;
    }
};