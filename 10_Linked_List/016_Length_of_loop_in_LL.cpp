/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/




//1 

class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                int length = 1;
                ListNode* temp = slow->next;

                while (temp != slow) {
                    length++;
                    temp = temp->next;
                }

                return length;
            }
        }

        return 0;
    }
};





class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast -> next -> next ;

            if(slow == fast){
                slow = head;

                while(slow != fast){
                    slow = slow -> next ;
                    fast = fast -> next;
                }

                ListNode* temp = slow;
                int ans = 1;

                while(slow->next != temp){
                    slow = slow->next;
                    ans++;
                }
                return ans;
            } 
        }
        return 0;
    }
};