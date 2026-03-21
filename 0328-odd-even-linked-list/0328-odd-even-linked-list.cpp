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
    ListNode* oddEvenList(ListNode* head) {
        vector<ListNode*> vec;
        if(!head){return nullptr;}
        ListNode* temp = head;
        while(temp && temp->next){
            vec.push_back(temp);
            temp=temp->next->next;
        }
        if(temp){vec.push_back(temp);}
        if(!head->next){return head;}
        temp = head->next;
        while(temp && temp->next){
            vec.push_back(temp);
            temp = temp->next->next;
        }
        if(temp){vec.push_back(temp);}
        for(int i = 0 ; i < vec.size() - 1; i++){
            vec[i]->next = vec[i+1];
        }
        vec[vec.size()-1]->next = nullptr;
        return vec[0];
    }
};