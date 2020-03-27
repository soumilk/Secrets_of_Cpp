//
// Created by soumil on 3/27/2020.
// IMPLEMENTATION OF QUEUE USING Linked List
/*
 This is the program to implement the queue using Link List
 */

#include<iostream>
using namespace std;

class node{
public:
    node *next;
    int data;
};
class Queue{
public:
    node* front;
    node* rear;
    node *queue;
    // Default constructor
    Queue(){
        rear=nullptr;    // This means that the queue is initially empty
        front=nullptr;
    }
    /// Functions which are going to be defined outside the class
    void enqueue(int);
    int dequeue();
    void display();
    bool isempty();
    bool isfull();
};

/// This is the function to insert the element in the queue from the rear
void Queue::enqueue(int value) {
    node *t=new node;
    // First check if the queue is full, this condition will arrive when the heap storage
    // is full
    if (t== nullptr){
        cout<<"The queue is full, "<< value<<" cannot be inserted in the queue"<<endl;
        return ;
    }
    else{
        t->data = value;
        t->next=nullptr;
        if(front==nullptr) {
            // This the first node
            front=rear=t;
        }
        else {
            rear->next = t;
            rear = t;
        }
    }
    cout<<rear->data<<" is inserted in the queue"<<endl;
}

/// This is the function to delete the element from the queue from the index 0
int Queue::dequeue() {
    int x=-1;
    // First check if the queue is empty
    if(front==nullptr){
        cout<<"The queue is empty "<<endl;
        return x;
    }
    // Now to delete the element at index 0, we need to shift all the elements
    // one index before
    x=front->data;
    node *temp=front;
    front=front->next;
    delete(temp);
    return x;
}

/// This is the function to display the queue
void Queue::display()
{
    // Check if the queue is empty
    if(front==rear){
        cout<<"Queue is empty, nothing to display"<<endl;
        return;
    }
    cout<<"This is the queue  ";
    node *temp=front;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Queue q;
    q.enqueue(10);q.enqueue(20);q.enqueue(30);
    q.enqueue(40);
    q.display();
    cout<<"Popped "<<q.dequeue()<<endl;
    cout<<"Popped "<<q.dequeue()<<endl;
    cout<<"Popped "<<q.dequeue()<<endl;
    cout<<"Popped "<<q.dequeue()<<endl;
    cout<<"Popped "<<q.dequeue()<<endl;
    q.display();
    return 0;
}
