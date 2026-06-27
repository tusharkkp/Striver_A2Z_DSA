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
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int itr = 0;

//         ListNode* temp = head;

//         while(temp != NULL){
//             temp = temp->next;
//             itr++;
//         }
        
//         itr=itr/2 ;

//         ListNode* mid = head;

//         for(int i = 0 ; i < itr ; i++){

//             mid = mid->next;
//         }
    
//     return mid;

//     }
// };











class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};