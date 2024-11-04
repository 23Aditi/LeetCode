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
    ListNode* swapPairs(ListNode* head) {
        if(!head){return head;}
        if(!head->next){return head;}
        ListNode* temp = head;
        ListNode* newHead = nullptr;
        ListNode* prev = nullptr;
        while(temp && temp->next){
            ListNode* nextNode = temp->next;
            if(!newHead){newHead = nextNode;}
            temp->next = nextNode->next;
            nextNode->next = temp;
            if(prev){
                prev->next = nextNode;
            }  
            
            prev = temp;            
            temp=temp->next;
         }
        
        
        return newHead;
    }
};