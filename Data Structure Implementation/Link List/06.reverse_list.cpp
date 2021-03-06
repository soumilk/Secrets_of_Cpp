//
// Created by soumil on 3/29/2020.
// LINEAR SINGLY LINKED LIST in C++ - REVERSE THE LINKED LIST
/*
 * This is the implementation Of the singly linear linked list.
 * Code performs some basic operations like:
        1. Insertion
        2. Insertion at a particular position 
        3. Display
        4. Find Length
        5. REVERSE THE ORDER OF THE LINKED LIST
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
    int Length();
    void reverse_list();
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
    cout<<"The linked list in order is ";
    Node *temp=start;
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
    cout<<"Insered "<<value<<" at position "<<pos<<endl;
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

/// FUNCTION REVERSES THE LINKED LIST
/// This is done using three pointers(sliding pointers, last->tail->current)
void LinkedList::reverse_list()
{
	Node *current=start;
	Node *tail=nullptr;
	Node *last=nullptr;
	while(current!=nullptr){
		last=tail;
		tail=current;
		current=current->next;
		tail->next=last;
	}
	// Now assign the start a new position that is the opposite side of the list
	start=tail;
}

int main()
{
    int arr[]={4,1,8,3,92,32,13};
    LinkedList ll(arr, sizeof(arr)/ sizeof(int));
    ll.Display();
    ll.Insert_at_pos(19,0);
    ll.Insert_at_pos(43,7);
    ll.Display();
    cout<<"Now the link list is reversed "<<endl;
    ll.reverse_list();
    ll.Display();
    
    return 0;
}
