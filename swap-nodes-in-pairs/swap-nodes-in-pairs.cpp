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
    ListNode* swapPairs(ListNode* head) {
        if(!head) return head;
        if(!head->next) return head;
        ListNode* temp =head->next;
        int r = temp->val;
        temp->val = head->val;
        head->val = r;
        head->next->next = swapPairs(head->next->next);
        return head;
        
        
    }
};