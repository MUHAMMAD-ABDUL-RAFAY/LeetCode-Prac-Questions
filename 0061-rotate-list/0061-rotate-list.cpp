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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* temp = head;
        int length = 0;
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        if(k % length == 0)
            return head;
        else{
            k = k % length;
            while(k != 0){
                temp = head;
                ListNode* prev = NULL;
                while(temp->next != NULL){
                    prev = temp;
                    temp = temp->next;
                }
                prev->next = NULL;
                temp->next = head;
                head = temp;
                k--;
            }
        }
        return head;
    }
};