/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int size =0;
        int f = k;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        ListNode* first = head;
        ListNode* second = head;
        while(f>1){
            first= first ->next;
            f--;
        }
        while(size - k > 0){
            second = second -> next;
            k++;
            
        }
        int t = first->val;
        first->val = second->val;
        second->val =t;
        return head;
        
    }
};
