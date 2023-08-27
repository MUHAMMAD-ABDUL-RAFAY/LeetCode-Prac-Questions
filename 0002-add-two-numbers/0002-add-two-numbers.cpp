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
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* head = NULL;
        ListNode* temp = head;
        int carry = 0;
        while(temp1 != NULL && temp2 != NULL){
            int sum = temp1->val + temp2->val + carry;
            if(sum > 9){
                carry = 1;
                if(head == NULL){
                    ListNode* answer = new ListNode(sum % 10);
                    head = answer;
                    temp = answer;
                }
                else{
                    ListNode* answer = new ListNode(sum % 10);
                    temp->next = answer;
                    temp = temp->next;
                }
            }
            else{
                carry = 0;
                if(head == NULL){
                    ListNode* answer = new ListNode(sum);
                    head = answer;
                    temp = answer;
                }
                else{
                    ListNode* answer = new ListNode(sum);
                    temp->next = answer;
                    temp = temp->next;
                }
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(temp1){
            while(temp1 != NULL){
                int sum = temp1->val + carry;
                if(sum > 9){
                    carry = 1;
                    ListNode* answer = new ListNode(sum % 10);
                    temp->next = answer;
                }
                else{
                    carry = 0;
                    ListNode* answer = new ListNode(sum);
                    temp->next = answer;
                    
                }
                temp = temp->next;
                temp1 = temp1->next;
                
            }
        }
        if(temp2){
            while(temp2 != NULL){
                int sum = temp2->val + carry;
                if(sum > 9){
                    carry = 1;
                    ListNode* answer = new ListNode(sum % 10);
                    temp->next = answer;
                }
                else{
                    carry = 0;
                    ListNode* answer = new ListNode(sum);
                    temp->next = answer;
                }
                temp = temp->next;
                temp2 = temp2->next;
            }
        }
        if(carry == 1){
            ListNode* answer = new ListNode(1);
            temp->next = answer;
            temp = temp->next;
        }
        return head;
    }
};