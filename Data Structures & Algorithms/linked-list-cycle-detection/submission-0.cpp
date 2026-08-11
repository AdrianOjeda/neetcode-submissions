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
    bool hasCycle(ListNode* head) {

        unordered_set<ListNode*> nodes;
        bool isFound = false;
        ListNode* aux = head;

        while(isFound == false and aux){
            if(nodes.find(aux) == nodes.end()){
                nodes.insert(aux);
                aux =  aux->next;
            }else{
                isFound = true;
            }
        }
        return isFound;
    }
};
