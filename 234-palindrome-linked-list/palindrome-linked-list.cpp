void Reverse_LL(ListNode* &head)
{
  ListNode*prev =NULL;
  ListNode*curr = head;
  while(curr!=NULL)
  {
    ListNode*forw = curr -> next;
    curr->next = prev;
    prev = curr;
    curr = forw;

  } 

  head = prev;
}

 
int Length(ListNode* &head)
{
    ListNode*temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

ListNode * Mid(ListNode* &head)
{
   ListNode*slow = head;
   ListNode*fast = head;

   while(fast!=NULL && fast->next!=NULL)
   {
    slow = slow->next;
    fast = fast->next->next;
   }  
   return slow; 
}

class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
     //First we calculate length of linked list according to which we place exact mid pointer
     int length = Length(head);

     // calculate mid of LL

      ListNode*mid = Mid(head);

     //checking its even or not
     ListNode*ExactMid = NULL;

     if(length % 2 == 0)
     {
         ExactMid = mid;
     }

     else
     {
        ExactMid = mid->next;
     }

     //reverse bhi karaenge mid se LL ko

     Reverse_LL(ExactMid);

     while(head!=NULL && ExactMid!=NULL)
     {
        if(head->val!= ExactMid->val)
        {
            return false;
        }
        else
        {
            head = head->next;
            ExactMid = ExactMid -> next; 
        }
     }
     return true;

        
    }
};