// *
//   * Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode(int x) : val(x), next(NULL) {}
//   };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      if(head ==  NULL || head->next == NULL)  //this is the edge case 
          return NULL;
        ListNode *slow = head ;
        ListNode *fast = head;
         ListNode *entry = head;
        
        while(fast->next && fast->next->next)
        {
            slow  = slow->next;
            fast = fast->next->next;
            if(slow == fast) //check for cycle existence
            {
                while(slow!=entry)
                {
                    slow  = slow->next;   //check for the starting of circle
                    entry = entry->next;
                }
                return entry;
            }
        }
   return NULL;
    }
};