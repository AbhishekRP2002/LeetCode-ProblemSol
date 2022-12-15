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
   //iterative approach     
//         if(head==NULL || head->next==NULL)
//             return head;
        
//         ListNode* temp = head;
        
//         while (temp != NULL && temp->next != NULL){
//             swap(temp->val, temp->next->val);
//             temp = temp->next->next;
//         }
        
//         return head;
        
      //recursive approach
        if(head==NULL or head->next == NULL)
            return head;
        ListNode* temp = head->next;
        // swap(temp->val , temp->next->val);
        head->next = swapPairs(temp->next);
        temp->next = head;
        return temp;
        
        
    }
};