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
    ListNode* reverseLL(ListNode* head){
        ListNode* temp = head;
        ListNode* next = head->next;
        ListNode* prev = nullptr;
        while(next){
            temp->next = prev;
            prev = temp;
            temp = next;
            next = next->next;
        }
        temp->next = prev;
        return temp;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prevSlow = nullptr;
        ListNode* middle = nullptr;
        while(fast && fast->next){
            prevSlow = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast)slow=slow->next;
        fast = head;
        if(prevSlow)prevSlow->next = reverseLL(slow);
        middle =  prevSlow->next;
        while(middle){
            if(fast->val != middle->val){return false;}
            middle = middle->next;
            fast = fast->next;
        }
        return true;
    }
};