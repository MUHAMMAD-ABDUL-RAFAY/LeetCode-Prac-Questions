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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int size = 0;
        int position;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        position = (size/2) + 1;
        temp = head;
        while(position != 1){
            position--;
            temp = temp->next;
        }
        return temp;
    }
};