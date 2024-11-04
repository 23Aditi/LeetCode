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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next){return head;}
        stack<ListNode*> s;
        ListNode* temp = head;
        while(temp){
            s.push(temp);
            temp = temp->next;
        }
        
        ListNode* newHead = s.top();
        ListNode* t = newHead;
        s.pop();
        ListNode* Next = nullptr;
        while(t!=nullptr && !s.empty() ){
            Next = s.top();
            s.pop();
            t->next = Next;
            t = t->next;
        }
        t->next = nullptr;
        return newHead;
    }
};