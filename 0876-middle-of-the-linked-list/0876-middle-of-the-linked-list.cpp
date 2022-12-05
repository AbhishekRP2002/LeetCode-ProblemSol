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
       ListNode* fast = head;
        ListNode* slow = head;
        ListNode* temp = head;
        
        int ctr =0;
        while(temp)
        {
            temp=temp->next;
            ctr++;
        }
        
        while(fast->next and fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
      if(ctr%2==0) return slow->next ;
        else return slow;
    }
};