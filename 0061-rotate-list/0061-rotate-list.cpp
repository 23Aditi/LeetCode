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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || !head || !head->next){return head;}
        ListNode* temp = head;
        ListNode* t = head;
        int length = 1;
        ListNode* newHead = nullptr;
        while(t->next){
            t=t->next;
            length++;
        }
        k%=length;
        if(k==0){return head;}
        
        for(int i = 0 ; i < k ; ++i){
            newHead = rotate(temp);
            temp = newHead;
        }
        return newHead;
    }
    
    ListNode* rotate(ListNode* head){
        ListNode* temp = head;
        ListNode* newtail = nullptr;
        while(temp->next){
            newtail = temp;
            temp = temp->next;
        }
        temp->next = head;
        newtail->next = nullptr;
        return temp;
    }
};