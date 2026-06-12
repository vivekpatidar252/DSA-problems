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
    ListNode* reverseKGroup(ListNode* head, int k)
    {
        //sbse pehele count krte hai no of node in grp k hai bhi ya nhi
        int count = 0 ;
        ListNode*temp = head;
        ListNode*prev= NULL;
        ListNode*curr = head;

        while(count < k && temp!=NULL)
        {
            temp = temp->next;
            count++;
        }
        
        //ab agr count == k hai toh yani reverse kr skte hai
        if(count==k)
        {
         //pehla grp hum reverse krenge baki recursion ko de denge
         int i = 0 ;
         ListNode*forw = NULL;
         while(i<k)
         {
         forw = curr -> next;
         curr->next = prev;
         prev = curr;
         curr = forw;
         i++;
         }

         ListNode*rechead = reverseKGroup(forw , k);

         head->next = rechead;
         return prev;
        }

        else
        {
            return head;
        }
    }
    
};