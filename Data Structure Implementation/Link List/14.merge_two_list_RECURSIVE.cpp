/*
* This is the recursive implementation of the program for merging two sorted linked list.
* l1 and l2 are the two sorted linked list. 
* We are returning the merged linked list.
*/

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    // Base cases 
    if(l1==nullptr) return l2;
    if(l2==nullptr) return l1;

    ListNode * result =nullptr;
    // Recursive cases 
    if(l1->val >=l2->val){
        result =l2;
        result ->next = mergeTwoLists(l1,l2->next);
    }
    else
    {
        result =l1;
        result->next =mergeTwoLists(l1->next,l2);
    }
    return result;
}
