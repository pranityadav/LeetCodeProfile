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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL;
        ListNode* temp = NULL;
        
        if(!list1) return list2;
        if(!list2) return list1;
        if(list1->val <= list2->val){
            head = list1;
            
            list1 = list1->next;
        }
        else{
            head = list2;
            list2 = list2->next;
        }
            temp = head;
        while(list1 && list2){
            if(list1->val <= list2->val){
            temp->next = list1;
            list1 = list1->next;    
            }
            else{
            temp->next = list2;
            list2 = list2->next;
            }
            temp = temp -> next;
            
            
            
        }
        if(list1){
            temp ->next = list1;
        }
        if(list2) 
            temp->next = list2;
        
        return head;
    }
};