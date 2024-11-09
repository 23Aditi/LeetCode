/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head){return nullptr;}
        unordered_map<Node*,Node*> um;
        Node* temp = head;
        
        while(temp){
            Node* newNode = new Node(temp->val);
            um[temp]= newNode;
            temp = temp->next;
        }
        
        temp = head;
        while(temp){
            Node* node = um[temp];
            node->next = um[temp->next];
            node->random = um[temp->random];
            temp = temp->next;
        }
        return um[head];
    }
};