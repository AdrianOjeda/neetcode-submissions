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

        unordered_map<Node*, Node*> myMap;
        myMap[nullptr] = nullptr;

        Node* aux = head;

        while(aux){
            Node* copy =new Node(aux->val);
            myMap[aux] = copy;
            aux = aux->next;
        }

        aux = head;
        while(aux){
            Node* temp = myMap[aux];
            temp->next = myMap[aux->next];
            temp->random = myMap[aux->random];
            aux = aux->next;
        }
        return myMap[head];
        
    }
};
