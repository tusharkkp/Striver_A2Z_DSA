/*
Definition of singly linked list:
class ListNode{
public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
public:
    ListNode* sortList(ListNode* &head) {

        // Dummy nodes
        ListNode* zeroDummy = new ListNode(-1);
        ListNode* oneDummy  = new ListNode(-1);
        ListNode* twoDummy  = new ListNode(-1);

        // Tail pointers
        ListNode* zeroTail = zeroDummy;
        ListNode* oneTail  = oneDummy;
        ListNode* twoTail  = twoDummy;

        ListNode* curr = head;

        while (curr != nullptr) {

            // Save next node
            ListNode* nextNode = curr->next;

            // Detach current node
            curr->next = nullptr;

            if (curr->data == 0) {
                zeroTail->next = curr;
                zeroTail = curr;
            }
            else if (curr->data == 1) {
                oneTail->next = curr;
                oneTail = curr;
            }
            else {
                twoTail->next = curr;
                twoTail = curr;
            }

            curr = nextNode;
        }

        // Connect the three lists
        zeroTail->next = (oneDummy->next != nullptr)
                            ? oneDummy->next
                            : twoDummy->next;

        oneTail->next = twoDummy->next;

        // Decide the new head
        if (zeroDummy->next)
            head = zeroDummy->next;
        else if (oneDummy->next)
            head = oneDummy->next;
        else
            head = twoDummy->next;

        delete zeroDummy;
        delete oneDummy;
        delete twoDummy;

        return head;
    }
};