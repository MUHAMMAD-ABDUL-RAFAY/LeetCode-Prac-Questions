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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<ListNode*> vec;
        ListNode* temp = head;
        while(temp != NULL){
            vec.push_back(temp);
            temp = temp->next;
        }
        int value = vec[k-1]->val;
        vec[k-1]->val = vec[vec.size() - k]->val;
        vec[vec.size()- k]->val = value;
        temp = head;
        int i = 0;
        while(temp != NULL){
            temp->val = vec[i]->val;
            temp = temp->next;
            i++;
        }
        return head;
        
        
        
        
        
        
    }
};