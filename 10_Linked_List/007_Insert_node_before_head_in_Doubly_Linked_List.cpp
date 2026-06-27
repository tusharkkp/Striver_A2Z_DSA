/**
class ListNode
{
 * Definition for doubly-linked list.
 *  public:
 *      int data;
 *      ListNode *prev;
 *      ListNode *next;
 *      ListNode() : data(0), prev(nullptr), next(nullptr) {}
 *      ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
 *      ListNode(int x, ListNode *prev, ListNode *next) : data(x), prev(prev), next(next) {}
};
*/

class Solution {
public:
    ListNode* insertBeforeHead(ListNode* head, int X) {
        // Your code goes here
        ListNode* newnode = new ListNode(X);
                
        if(head==NULL){
            head = newnode;
        }else{
            newnode->next = head;
            head->prev = newnode;
            newnode->prev = NULL;
            head = newnode;
        }
    return head;
    }
};