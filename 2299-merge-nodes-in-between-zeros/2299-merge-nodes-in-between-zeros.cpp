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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*saver = head;
        ListNode* temp = head->next;
        int sum = 0;
        while(temp->next != NULL){
            if(temp->val == 0){
               saver->val = sum;
               sum = 0;
               saver = saver->next;
            }
            else{
                sum += temp->val;
            }
            temp = temp->next;
        }
        saver->val = sum;
        saver->next = NULL;
        
        return head;
        
    }
};