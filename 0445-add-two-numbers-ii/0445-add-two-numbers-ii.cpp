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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         stack<int>s1, s2;
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        
        while(temp1 != NULL)
        {
            s1.push(temp1->val);
            temp1 = temp1->next;
        }
        
        while(temp2 != NULL)
        {
            s2.push(temp2->val);
            temp2 = temp2->next;
        }
        
        ListNode* result = NULL;
        int carry = 0;
        int sum = 0 , rem  =0;
        
        
        while(!s1.empty()  or !s2.empty() or carry != 0)
        {
            int digit1 = 0;
            if(!s1.empty())
            {
                digit1 = s1.top();
                s1.pop();
                
            }
            
            
            int digit2 = 0;
            if(!s2.empty())
            {
                digit2 = s2.top();
                s2.pop();
            }
            
            sum = digit1 + digit2 + carry;
            rem = sum%10;
            carry = sum/10;
            
            ListNode* node = new ListNode(rem);
            node->next = result;
            result = node;
            
          
            
        }
        
        return result;
    }
};