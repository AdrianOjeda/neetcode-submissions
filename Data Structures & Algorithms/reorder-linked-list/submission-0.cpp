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
    void reorderList(ListNode* head) {
        

        vector<int> listVector;
        ListNode* aux = head;

        while (aux) {
            listVector.push_back(aux->val);
            aux = aux->next;
        }

       
        aux = head;  
        int j = 0;
        int sub = 1;
        for (int i = 1; i <= listVector.size(); i++) {
            if (i % 2 == 0) {
                aux->val = listVector[listVector.size() - sub];
                sub++;
            } else {
                aux->val = listVector[j];
                j++;
            }
            aux = aux->next; 
        }
        
    }
};