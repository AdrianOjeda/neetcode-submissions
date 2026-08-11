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

        ListNode* result = nullptr;
        ListNode* aux = head;

        while(aux){
            ListNode* temp = new ListNode(aux->val, nullptr);
            if(result == nullptr){
                result = temp;   
            }else{
                temp->next = result;
                result = temp; 
            }
            aux = aux->next;
        }

        return result;   
    }
};
