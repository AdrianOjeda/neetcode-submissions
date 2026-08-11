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
        if(head == nullptr) return nullptr;
        if(head->next == nullptr) return head;
        ListNode* result = nullptr;
        ListNode* tail = result;

        ListNode* aux = head;
        int count = 0;
        int size=0;
        while(aux){
            size++;
            aux= aux->next;
        }
        aux = head;
       
        while(count < k){
            ListNode* temp = new ListNode(aux->val, nullptr);
            if(result == nullptr){
                    result = temp;
                    tail = result;
            }else{ 
                    temp->next = result;
                    result = temp;
            }
            count++;
            aux = aux->next;
        }
        count =0;
        int cycles =  (size / k)-1;
        

        for(int i =0; i<cycles; ++i){
            ListNode* dummyTail = nullptr;
            while(count<k){
                ListNode* temp  = new ListNode(aux->val, nullptr);
                if(tail->next ==  nullptr){
                   tail->next =  temp;
                   dummyTail = temp;
                   
                }else{
                    temp->next = tail->next;
                    tail->next = temp;
                }
                aux = aux->next;
                count++;
            }
            
            count=0;
            tail = dummyTail;
        }
        while(aux){
            ListNode* temp = new ListNode(aux->val, nullptr);
            tail->next= temp;
            aux = aux->next;
            tail = temp;
        }
        
        return result;
    }
};
