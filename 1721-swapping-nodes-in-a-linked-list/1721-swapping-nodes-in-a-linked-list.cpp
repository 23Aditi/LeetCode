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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head){return head;}
        ListNode* temp = head;
        ListNode* kFromStart = nullptr;
        ListNode* kFromEnd = nullptr;
        stack<ListNode*> s;
        int count = 0;
        while(temp){
            s.push(temp);
            count ++;
            if(count == k){
                kFromStart = temp;
            }
            temp=temp->next;
        }
        count = 0;
        while(!s.empty()){
            temp = s.top();
            s.pop();
            count++;

            if(count == k){
                kFromEnd = temp;
                break;
            }
        }
        
        int tempVal = kFromStart->val;
        kFromStart->val = kFromEnd->val;
        kFromEnd->val = tempVal;

        
        return head;
    }
};