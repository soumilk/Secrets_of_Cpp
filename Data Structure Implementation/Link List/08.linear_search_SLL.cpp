//
// Created by soumil on 3/29/2020.
// LINEAR SINGLY LINKED LIST in C++ - LINEAR SEARCH AN ELEMENT IN LINKED LIST 
/*
 * This is the implementation Of the singly linear linked list.
 * Code performs some basic operations like:
        1. Insertion
        2. Display
        3. LINEAR SEARCH
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
    void Linear_search(int);
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

/// THIS IS THE FUNCTION FOR LINEAR SEARCH OF AN ELEMENT 
void LinkedList::Linear_search(int value){
    if(start==nullptr){
        cout<<"List is empty, nothing to search"<<endl;
        return;
    }
    Node *temp=start;
    while(temp!=nullptr){
        if(temp->data==value){
            cout<<"value "<<value<<" is found"<<endl;
            return;
        }
        temp=temp->next;
    }
    cout<<"value "<<value<<" is not found"<<endl;
}

int main()
{
    int arr[]={4,1,8,3,92,32,32,13,12};
    LinkedList ll(arr, sizeof(arr)/ sizeof(int));
    ll.Display();
    ll.Linear_search(13);
    ll.Linear_search(92);
    ll.Linear_search(54);
    return 0;
}
