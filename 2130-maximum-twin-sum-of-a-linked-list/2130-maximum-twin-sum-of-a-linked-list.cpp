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
    int pairSum(ListNode* head) {
        vector<int> vec;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            vec.push_back(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        int maxi = 0;
        for(int i = vec.size()-1; i>=0 ; i--){
            vec[i]+=slow->val;
            slow = slow->next;
            maxi = max(maxi,vec[i]);
        }
        return maxi;
        
    }
};