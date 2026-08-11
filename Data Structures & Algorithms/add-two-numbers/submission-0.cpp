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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* l1Aux = l1;
        ListNode* l2Aux = l2;
        ListNode* resultList = nullptr;
        ListNode* tail = resultList;

        int carry = 0,
            sum = 0;
        while(l1Aux or l2Aux){
            if(l1Aux and !l2Aux){
                sum = l1Aux->val + carry;
                if(sum>9){
                carry = 1;
                sum -= 10;
                ListNode* temp = new ListNode(sum, nullptr);
                if(!resultList){
                    resultList = temp;
                    tail = temp;
                }else{
                    tail->next = temp;
                    tail = temp;
                }
   
            }else{
                carry = 0;
                ListNode* temp = new ListNode(sum, nullptr);
                if(!resultList){
                    resultList = temp;
                    tail = temp;
                }else{
                    tail->next = temp;
                    tail = temp;
                }
            }
                l1Aux = l1Aux->next;
            }if(l2Aux and !l1Aux){
                sum = l2Aux->val +carry;
                if(sum>9){
                carry = 1;
                sum -= 10;
                ListNode* temp = new ListNode(sum, nullptr);
                if(!resultList){
                    resultList = temp;
                    tail = temp;
                }else{
                    tail->next = temp;
                    tail = temp;
                }
   
            }else{
                carry = 0;
                ListNode* temp = new ListNode(sum, nullptr);
                if(!resultList){
                    resultList = temp;
                    tail = temp;
                }else{
                    tail->next = temp;
                    tail = temp;
                }
            }
                l2Aux = l2Aux->next;
            }else if(l1Aux and l2Aux){
            sum = l1Aux->val + l2Aux->val + carry;
            
            if(sum>9){
                carry = 1;
                sum -= 10;
                ListNode* temp = new ListNode(sum, nullptr);
                if(!resultList){
                    resultList = temp;
                    tail = temp;
                }else{
                    tail->next = temp;
                    tail = temp;
                }
   
            }else{
                carry = 0;
                ListNode* temp = new ListNode(sum, nullptr);
                if(!resultList){
                    resultList = temp;
                    tail = temp;
                }else{
                    tail->next = temp;
                    tail = temp;
                }
            }
            
            cout<<sum<<" ";
            l1Aux = l1Aux->next;
            l2Aux = l2Aux->next;
            }
           
        }if(carry>0){
            ListNode* temp = new ListNode(carry, nullptr);
            tail->next = temp;
            tail =temp;
        }


        return resultList;
    }
};