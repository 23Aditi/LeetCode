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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB){return nullptr;}
        if(!headA && !headB){return headA;}
        
        ListNode* A = headA;
        ListNode* B = headB;
        
        while(A!=B){
            
            A!=nullptr ? A = A->next : A = headB; // slow n fast ptr approach won't work here. You may never find intersection in that case
            B!=nullptr ? B = B->next : B = headA;   // you need to switch between both
        }
        return A;
    }
};