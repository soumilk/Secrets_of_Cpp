//
// Created by soumil on 3/26/2020.
// IMPLEMENTATION OF CIRCULAR QUEUE USING C++
/*
 This is the program to implement the queue using arrays,
 now, in the implementation of the queue using array, we will use:
    1. Single pointer(not time efficient)
    2. Double pointer(better than single pointer but leads to memory wastage)
    3. Circular Queue(Best method)

 This is the program to implement the queue using a TWO pointers
 */

#include<iostream>
using namespace std;

class Queue{
public:
    int front;
    int rear;
    int *queue;
    int size;
    // Default constructor
    Queue(){
        rear=front=0;    // This means that the queue is initially empty
        size=10;
        queue= new int[size];
    }
    // Parameterised constructor
    Queue(int n){
        front=rear=0;
        size=n;
        queue =new int[size];
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
    // First check if the queue is full
    if (isfull()){
        cout<<"The queue is full, "<< value<<" cannot be inserted in the queue"<<endl;
        return ;
    }
    rear=(rear+1)%size;
    queue[rear]=value;
    cout<<value<<" is inserted in the queue"<<endl;
}

/// This is the function to delete the element from the queue from the index 0
int Queue::dequeue() {
    int x=-1;
    // First check if the queue is empty
    if(isempty()){
        cout<<"The queue is empty "<<endl;
        return x;
    }
    // Now to delete the element at index 0, we need to shift all the elements
    // one index before
    front=(front+1)%size;
    x=queue[front];
    return x;
}

/// This is the function to display the queue
void Queue::display()
{
    // Check if the queue is empty
    if(isempty()){
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"This is the queue  ";
    int i=front+1;
    do{
        cout<<queue[i]<<" ";
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
    cout<<endl;
}

/// This is the function to check if the queue is full
bool Queue::isempty() {
    return rear==front;
}

/// This is the function to check if the queue is empty
bool Queue::isfull() {
    return (rear+1)%size==front;
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
