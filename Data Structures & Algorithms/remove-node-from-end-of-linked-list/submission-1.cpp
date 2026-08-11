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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        vector<int> nums ;
        ListNode* aux =  head;

        while(aux){
            nums.push_back(aux->val);
            aux = aux->next;

        }
        int nValue = nums.size()-n;
        cout<<nValue<<endl;
        ListNode* result = nullptr;
        ListNode* auxRes = result;

        for(int i =0; i<nums.size(); i++){
            if(i != nValue){
                ListNode* temp = new ListNode(nums[i], nullptr);
                if(result==nullptr){
                    auxRes = temp;
                    result =  auxRes;
                }else{
                    auxRes->next = temp;
                    auxRes= auxRes->next;
                }
            }
        }
        return result;
    }
};
