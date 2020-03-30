//
// Created by soumil on 3/31/2020.
// CIRCULAR SINGLY LINKED LIST in C++- Insertion, Deletion, Display and length
/*
 * This is the implementation doe for the Circular Singly linked list.
 * Code performs some basic operations like:
        1. Insertion
        2. Deletion
        3. Display
        4. Find Length
 */
#include <iostream>
using namespace std;

/// This is a node class, which consists of the properties of a node of the Circular link list
class Node
{
public:
    int data;       // Variable to store data
    Node *next;     // Pointer to point next node type element
};

/// This is a Circular linked list class,
class CircularLinkedList {
private:
    Node *start;
public:
    CircularLinkedList(){
        start= nullptr;
    }
    CircularLinkedList(int * ,int);
    void Display();
    bool isempty();
    void Insert_at_pos(int ,int );
    int Delete(int );
    int Length();
};

/// This is the parameterised constructor, to initilize the Circular linked list with some nodes
CircularLinkedList::CircularLinkedList(int arr[], int n) {
    start=new Node;
    // Initially check if the linked list is already full, but as this is the linked list and we are
    // dynamically assigning the vale in the linked list, so the condition of the linked list be full will arrive
    // when the heap storage is totally full.
    if( start == nullptr){
        cout<<"The linked list is full"<<endl;
        return;
    }
    start->data=arr[0];
    start->next= start;         // Circularly pointing to starting node
    Node *last=start;
    // Now enter the elements of the array in the linked ist
    for(int i=1;i<n;i++){
        Node *temp=new Node;
        temp->data=arr[i];
        temp->next=last->next;  // To maintain circular fashion
        last->next=temp;
        last=temp;
    }
}

/// This is the function to display the linked list
void CircularLinkedList::Display() {
    // Check if the linked list is empty
    if(isempty()){
        cout<<"Nothing ot display, empty linked list"<<endl;
    }
    Node *temp=start;
    cout<<"The Circular Linked list is :";
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=start);     // Stop when the first node is reached
    cout<<endl;
}

/// This is the function to check if the Circular linked list is empty or full
bool CircularLinkedList::isempty() {
    return start==nullptr;
}

/// This is the function to Insert a node after a certain position in the Circular linked list
void CircularLinkedList::Insert_at_pos(int value, int pos) {
    // Check if the position provided is valid
    if(pos<0 || pos>Length()){
        cout<<"Invalid position provided "<<endl;
        return;
    }
    Node *temp=new Node;
    temp->data=value;
    Node *marker=start;

    // Now there are two cases of insertion of the node at a particular position
    // 1. Insertion at the begging of the linked list at position 0
    if (pos==0){
        if(start==nullptr){
            start=temp;
            start->next=start;
        }
        else{
            // Reach the last node so that its pointer could be changed to point new node
            while(marker->next!=start){
                marker=marker->next;
            }
            marker->next=temp;
            temp->next=start;
            start=temp;
        }
    }
        // 2. Any other position
    else{
        // Reach at that position
        for(int i=0;i<pos-1;i++){
            marker =marker->next;
        }
        temp->next=marker->next;
        marker->next=temp;
    }
    cout<<"Value "<<value<<" is inserted at position "<<pos<<endl;
}

/// This is the function to provide the length of the Circular linked list
int CircularLinkedList::Length() {
    Node *temp=start;
    int counter=0;
    do{
        counter++;
        temp=temp->next;
    }
    while(temp!=start);
    return counter;
}

/// This is the function to delete an element from the certain position in a Circular linked list
int CircularLinkedList::Delete(int pos) {
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
        while(temp->next!=start) temp=temp->next;
        x=temp->data;
        if(start==temp){
            delete(start);
            start= nullptr;
        }
        else{
            temp->next=start->next;
            delete(start);
            start=temp->next;
        }
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

int main()
{
    int arr[]={4,1,8,3,92,32,1};
    CircularLinkedList ll(arr, sizeof(arr)/ sizeof(int));
    ll.Display();
    ll.Insert_at_pos(53,9);
    ll.Insert_at_pos(13,0);
    ll.Insert_at_pos(43,7);
    ll.Display();
    cout<<"Deleted Element is "<<ll.Delete(-4)<<endl;
    cout<<"Deleted Element is "<<ll.Delete(4)<<endl;
    cout<<"Deleted Element is "<<ll.Delete(1)<<endl;
    ll.Display();
    return 0;
}

