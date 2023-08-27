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
        ListNode *temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        
        int catchs = 0;
        temp = head;
        if(head->next != NULL){
        ListNode *prev = NULL;
        while(count-n != catchs){
            prev = temp;
            temp = temp->next;
            catchs++;
        }
            if(temp == head){
                head = head->next;
            }
            else{
                prev->next = temp->next;
            }
            
        }
        else{
            head = NULL;
        }
        return head;
    }
};