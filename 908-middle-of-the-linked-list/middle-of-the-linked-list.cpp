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
    ListNode* middleNode(ListNode* head)
    {
        //Slow and fast pointer concept lagaenge 
        //slow and fast intially head pr hi rahnge

        ListNode*slow = head;
        ListNode*fast = head;

        while(fast!=NULL && fast->next !=NULL)
        {
            slow = slow->next; //slow ko ek se badaenge
            fast = fast->next->next; // fast ko 2 se badenge
        }

        return slow ; //slow will give u middle node
        
    }
};