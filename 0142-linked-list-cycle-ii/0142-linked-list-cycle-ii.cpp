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
    ListNode *detectCycle(ListNode *head) {
        if(!head){return nullptr;}
        ListNode* fast = head;
        ListNode* slow = head;
        while(slow && fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){break;}
        }
        if(slow == fast && head->next!=nullptr){
            fast = head;
            while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
            
        }else{
            return nullptr;
        }
        return slow;
    }
};