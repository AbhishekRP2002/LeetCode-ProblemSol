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
    ListNode* deleteDuplicates(ListNode* head) {
       
        //Boundary case 
//         if(head==NULL or head->next==NULL)
//             return head;
        
//         ListNode* temp = head;
//         ListNode* curr = head;
        
        
//         while( temp and temp->next)
//         {
          
//             curr = temp->next;
//             if(temp->val == curr->val)
//             {
           
//             temp->next = curr->next;
//             curr->next=NULL;
//             temp = temp->next;
            
//             }
//             else 
//             {
//                 temp= temp->next;
               
//             }
            
//         }
        
        
//         return head;
        
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* cur = head;
        
        while(cur->next != nullptr){
            if(cur->val == cur->next->val){
                cur->next = cur->next->next;
               
            }
            else cur = cur->next;
        }
        return head;
    }
};