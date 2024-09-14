/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    //     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    //     ListNode* ptr1 = headA;
    //     ListNode* ptr2 = headB;
    //     if(ptr1==NULL || ptr2 == NULL){
    //         return NULL;
    //     }
    //     while(ptr1!=ptr2){
    //         ptr1 = ptr1->next;
    //         ptr2 = ptr2->next;
    //         if(ptr1==ptr2){
    //             return ptr1;
    //         }
    //         if(ptr1==nullptr){
    //             ptr1= headB;
    //         }
    //         if(ptr2==nullptr){
    //             ptr2= headA;
    //         }

    //     }
    //     return ptr1;
    // }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        unordered_set <ListNode*> mp;
        ListNode* temp1 = headA;
        while(temp1!=NULL){
            mp.insert(temp1);
            temp1 = temp1->next;
        }
        ListNode* temp2 = headB;
        while(temp2!=nullptr){
            if(mp.find(temp2) !=mp.end()){
                return temp2;
            }
            temp2 = temp2->next;
        }
        return nullptr;
    }
};