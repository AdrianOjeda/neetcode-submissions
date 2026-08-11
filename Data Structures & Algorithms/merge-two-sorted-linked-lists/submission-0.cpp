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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;

        ListNode* result = nullptr;
        ListNode* aux2 = list2;
        ListNode* aux1 = list1;
        ListNode* auxRes = nullptr;

        while(aux1 and aux2){
            if(aux2->val < aux1->val){
                ListNode* temp = new ListNode(aux2->val, nullptr);
                if(result == nullptr){
                    auxRes = temp;
                    result = auxRes;
                }else{
                    auxRes->next = temp;
                    auxRes = auxRes->next;
                    
                }
                aux2 = aux2->next;
            }else{
                ListNode* temp = new ListNode(aux1->val, nullptr);
                if(result == nullptr){
                    auxRes = temp;
                    result = auxRes;
                }else{
                    auxRes->next = temp;
                    auxRes = auxRes->next;
                    
                }
                aux1 = aux1->next;
            }
        }
        if(!aux1 and aux2){
            while(aux2){
                ListNode* temp = new ListNode(aux2->val, nullptr);
                auxRes->next = temp;
                auxRes = auxRes->next;
                aux2 = aux2->next;
            }
        }else if(!aux2 and aux1){
            while(aux1){
                ListNode* temp = new ListNode(aux1->val, nullptr);
                auxRes->next = temp;
                auxRes = auxRes->next;
                aux1 = aux1->next;
            }
        }


        return result;
    }
};