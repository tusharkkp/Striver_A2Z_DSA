
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int sizee = 0;

        while(temp != NULL){
            temp = temp->next;
            sizee++;
        }
        n = sizee - n + 1;

        if(n ==1 ){
            head = head->next;
            return head;
        }
        
        ListNode* itr = head;
        
        for(int i = 1 ; i < n-1 ; i++){
            itr = itr-> next;
        }
        itr->next = itr->next->next;
        return head;

    }
};
//
//Intuition
//
//Maintain a gap of n nodes between fast and slow.
//
//Create a dummy node before head.
//Move fast ahead by n nodes.
//Move both fast and slow together until fast->next == NULL.
//Now slow is just before the node to delete.
//Delete the node by changing one pointer.

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move fast n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Move both until fast reaches the last node
        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete the nth node from the end
        slow->next = slow->next->next;

        return dummy->next;
    }
};