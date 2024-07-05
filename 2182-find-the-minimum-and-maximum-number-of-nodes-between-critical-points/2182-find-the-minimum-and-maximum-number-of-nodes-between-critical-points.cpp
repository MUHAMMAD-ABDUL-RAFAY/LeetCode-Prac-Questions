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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL)
        {
            return {-1,-1};
        }
        else{
            long i = 2;
            int first = -1;
            int second = -1;
            int minDist = INT_MAX;
            ListNode* temp = head->next;
            ListNode* prev = head;
            while(temp->next != NULL){
                if((temp->val < prev->val && temp->val < temp->next->val) || 
                    (temp->val > prev->val && temp->val > temp->next->val)){
                    if(first == -1){
                        first = i;
                    }
                    else{
                        minDist = min(minDist,int(i - int(second == -1 ? first : second)));
                        second = i;
                    }

                }
                i++;
                prev = temp;
                temp = temp->next;
            }
            if(first == -1)
                return {-1,-1};
            if(second == -1)
                return {-1,-1};
            return {minDist,int(second-first)};
        }
    }
};