#include <stdio.h>

ListNode* reverseList(ListNode* head) {
  ListNode *sp = head;
  ListNode *fp = head;

  // if(head == NULL || head->next == NULL)
  // {
  //     return head;
  // }
  while(fp != NULL && fp->next != NULL)
  {
    fp = fp->next->next;
    sp = sp->next;
  }

  return sp;   
}
int main()
{
  
}