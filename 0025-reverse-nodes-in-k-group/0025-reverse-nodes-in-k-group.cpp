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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head){return nullptr;}
        if(k==1){return head;}
        ListNode* newHead = nullptr;
        ListNode* tail = nullptr;
        ListNode* temp = head;
        stack<ListNode*> s;
        while(true){
            ListNode* prev = temp;
            while(temp && s.size()!=k){
                s.push(temp);
                temp = temp->next;
            }
            if(s.size()!=k){
                if(tail){
                    tail->next = prev;
                }
                break;}
            if(!newHead){newHead = s.top(); }
            ListNode* newNode = s.top();
            ListNode* n = newNode;
            s.pop();
            while(!s.empty()){
                n->next = s.top();
                s.pop();
                n=n->next;  
            }
            if(tail){tail->next = newNode;}
            tail = n; // 1 
            n->next = temp;
            
            if(!temp){break;}
        }
            
         return newHead;   
        }
        

};