


class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode* curr = head;          // odd pointer
        ListNode* nexxt = head->next;   // even pointer
        ListNode* evenHead = nexxt;     // save head of even list

        while (nexxt != NULL && nexxt->next != NULL) {

            curr->next = nexxt->next;
            curr = curr->next;

            nexxt->next = curr->next;
            nexxt = nexxt->next;
        }

        curr->next = evenHead;

        return head;
    }
};