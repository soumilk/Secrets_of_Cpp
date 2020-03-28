//
// Created by soumil on 3/27/2020.
// LINEAR SINGLY LINKED LIST in C++ - DETECT LOOP IN THE LIST
/*
 * This is the implementation for the singly linear linked list.
 * Code performs some basic operations like:
        1. Insertion
        2. Deletion
        3. Display
        4. Find Length
        5. DETECT LOOP IN THE LINKED LIST   
 */
#include <iostream>
using namespace std;

/// This is a node class, which consists of the properties of a node of the link list
class Node
{
public:
    int data;       // Variable to store data
    Node *next;     // Pointer to point next node type element
};

/// This is a linked list class,
class LinkedList{
private:
    Node *start;
public:
    LinkedList(){
        start= nullptr;
    }
    LinkedList(int * ,int);
    void Display();
    bool isempty();
    void Insert_at_pos(int ,int );
    int Delete(int );
    int Length();
    bool Is_loop();
};

/// This is the parameterised constructor, to initilize the linked list with some nodes
LinkedList::LinkedList(int arr[], int n) {
    start=new Node;
    // Initially check if the linked ist is already full, but as this is the linked list and we are
    // dynamically assigning the vale in the linked list, so the condition of the linked list be full will arrive
    // when the heap storage is totally full.
    if( start == nullptr){
        cout<<"The linked list is full"<<endl;
        return;
    }
    start->data=arr[0];
    start->next= nullptr;
    Node *last=start;
    // Now enter the elements of the array in the linked ist
    for(int i=1;i<n;i++){
        Node *temp=new Node;
        temp->data=arr[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
}

/// This is the function to display the linked list
void LinkedList::Display() {
    // Check if the linked list is empty
    if(isempty()){
        cout<<"Nothing ot display, empty linked list"<<endl;
    }
    Node *temp=start;
    cout<<"The Linked list :";
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

/// This is the function to check if the linked list is empty or full
bool LinkedList::isempty() {
    return start==nullptr;
}

/// This is the function to Insert a node after a certain position in the linked list
void LinkedList::Insert_at_pos(int value, int pos) {
    // Check if the position provided is valid
    if(pos<0 || pos>Length()){
        cout<<"Invalid position provided "<<endl;
        return;
    }
    Node *temp=new Node;
    temp->data=value;
    temp->next=nullptr;

    // Now there are two cases of insertion of the node at a particular position
    // 1. Insertion at the begging of the linked list at position 0
    if (pos==0){
        temp->next=start;
        start=temp;
    }
        // 2. Any other position
    else{
        Node *marker=start;
        // Reach at that position
        for(int i=0;i<pos-1;i++){
            marker =marker->next;
        }
        temp->next=marker->next;
        marker->next=temp;
    }
}

/// This is the function to provide the length of the linked list
int LinkedList::Length() {
    Node *temp=start;
    int counter=0;
    while(temp!=nullptr){
        counter++;
        temp=temp->next;
    }
    return counter;
}

/// This is the function to delete an element from the certain position from linked list
int LinkedList::Delete(int pos) {
    int x=-1;
    // Check is the linked list is empty
    if(start==nullptr){
        cout<<"Nothing to delete, the linked list is empty"<<endl;
        return x;
    }
    // Now check if the provided position id valid or not
    if(pos<1 || pos>Length()){
        cout<<"Invalid position "<<endl;
        return x;
    }
    // Now there are two cases of deletion of the node at a particular position
    // 1. Position is 1, i.e. first node
    Node *temp=start;
    if(pos==1){
        x=temp->data;
        start=start->next;
        delete(temp);
    }
    // 2. Any other position 
    else{
        // Reach at that position
        // Need one more pointer to keep the record of previous pointer, we can do it using a single
        // pointer as well by using 'pointer->next->next', but for better understanding, we are using two pointer
        Node *tail=nullptr;
        for(int i=0;i<pos-1;i++){
            tail=temp;
            temp=temp->next;
        }
        tail->next=temp->next;
        x=temp->data;
        delete(temp);
    }
    return x;
}

/// FUNCTION TO DETECT LOOP IN LINKED LIST, for this two pointers are 
/// used and thet are moved with slided with different speed in the list, if they meet then
/// it means that there is a loop else not
bool LinkedList::Is_loop(){
    Node *slow,*fast;
    slow=fast=start;
    do{
        slow=slow->next;
        fast=fast->next;
        if(fast){
            fast=fast->next;
        }
    }while(slow && fast && slow!=fast);
    return slow==fast;
}

int main()
{
    int arr[]={5,9,14,35,66,87};
    LinkedList ll(arr, sizeof(arr)/ sizeof(int));
    cout<<"The first linked list is ";
    ll.Display();
    // Introducing loops in the linked list
    if(ll.Is_loop()){
        cout<<"Loop present"<<endl;
    }else{
        cout<<"No loop"<<endl;
    }
    return 0;
}
