/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 // can be implemented using Stack
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }


        ListNode* newhead = reverseLL(slow-> next);
        ListNode* first = head;
        ListNode* second = newhead;

        while(second != NULL){
            if(first->val == second->val){
                first = first->next;
                second = second -> next;
                continue;
            }else{
                reverseLL(newhead);
                return false;
            }
        }
        reverseLL(newhead);
        return true;

    }

    ListNode* reverseLL(ListNode* head){

        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* curr = head; // for current node
        ListNode* prev = NULL; // for prev node of curr
        ListNode* Nexxt = NULL; // for next node of curr

        while(curr != NULL){ // till curr reaches end
            Nexxt = curr-> next; // store the next of current nod
            curr -> next = prev; // reverse the link

            prev = curr; // move ahed
            curr = Nexxt; // move ahed
        }
        return prev; // coz curr is NULL
    }

};