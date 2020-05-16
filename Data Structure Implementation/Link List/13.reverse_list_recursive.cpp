/*
* This is the recursive program to reverse a linked list node.
* Approach:
  - When the recursion reach the end, it returns its address.
  - This is a tail recursion 
  - To reverse the nodes of the list, it keeps on pointing the nodes ahead to the next nodes using '->next->next'
  - Trace the recursion well to understand its working.
*/
    
ListNode* reverseList(ListNode* head) {
    // Base Case 
    if (head==nullptr || head->next==nullptr)
        return head;
    // Recursice case 
    ListNode * temp=reverseList(head->next);    // Important step to reverse the nodes ordering
    head->next->next=head;
    head->next=nullptr;
    return temp;
}
