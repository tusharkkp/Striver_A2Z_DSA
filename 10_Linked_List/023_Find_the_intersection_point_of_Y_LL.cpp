/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


//BRUTTTTTTTTTTTTTTTTTTTT FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF



class Solution3 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA != NULL){

            tempB = headB;
            while(tempB != NULL){

                if(tempB == tempA){
                    return tempB;
                }
                tempB = tempB->next;
            }
            tempA = tempA -> next;
        }
        return NULL;
    }
};



//Betttttttttttttterrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr

//O(m+n) ,,,,, using set internally uses hashing

//searching with Hashing takes o(1) TC

class Solution1 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> st;
//here we passed the ListNode* coz we are creating the set of mem
// adderess of nodes and if in 2nd while loop any node points to same memory loc then its a intersection point
        while(headA != NULL){
            st.insert(headA);
            headA = headA -> next;
        }

        while(headB != NULL){
            if(st.contains(headB)){return headB;}
            headB = headB->next;
        }

        return NULL;
    }
};


//OoooooooPPPPPPPtttttttttttttttiiiiiiiimmmmmmmmaaaaaaaaaallllllll

class Solution2 {
public:
    int diff(ListNode *headA, ListNode *headB) {
        int l1 = 0 ; int l2  = 0;
        while(headA != NULL || headB != NULL){
            if(headA != NULL){
                ++l1;
                headA = headA->next;
            }
            if(headB != NULL){
                ++l2;
                headB = headB->next;
            }
        }
        return l1-l2;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len = diff(headA, headB);

        if(len < 0){
            while(len++ != 0){headB = headB->next;}
        }else{
            while(len-- != 0 ){headA = headA->next;}
        }

        while(headA != NULL){
            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }

        return NULL;
    }
    };


    //MMMMMMMMMMoooooooooooorrrrrrrrrrreeeeeeeeeee
    //Optimal


class Solution{
public:

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* d1 = headA;
        ListNode* d2 = headB;

        while(d1 != d2){
            if(d1 == NULL){
                d1 = headB;
            }else{
                d1 = d1 -> next;
            }

            if(d2 == NULL){
                d2 = headA;
            }else{
                d2 = d2->next;
            }

        }
        return d1;
    }
    };