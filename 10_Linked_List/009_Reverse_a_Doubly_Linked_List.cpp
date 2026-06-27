/*
class ListNode {
public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};
*/

class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {
        // Your code goes here
        if(head == NULL || head-> next == NULL){
            return head;
        }

        ListNode* curr = head;

        while(curr != NULL){
            ListNode* temp = curr->next;
            curr->next = curr->prev;
            curr->prev = temp;

            head = curr;
            curr = temp;
        }
    return head;
    }
};