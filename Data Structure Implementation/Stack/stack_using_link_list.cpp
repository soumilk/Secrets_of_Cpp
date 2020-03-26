//
// Created by soumil on 3/26/2020.
//
#include<iostream>
using namespace std;

/// This is the class for the node of the linked list which is going to be used as a
/// stack element
class node
{
public:
    node *next;
    int data;
};

/// This is the stack class which uses the node class objects
class Stack
{
private:
    node *top;    // Pointer to store a node type of object's address
public:
    Stack(){
        top = nullptr;
    }
    void push(int);
    int pop();
    void display();
};

/// THis is the function to insert the value in the top of the stack
void Stack::push(int value) {
    node *sl=new node;
    // Check if the stack is full
    if(sl== nullptr){
        cout<<"The stack is full"<<endl;
        return;
    }
    sl->data=value;
    sl->next=top;
    top=sl;
}

/// This is the function to pop out the element from the stack
int Stack::pop(){
    // check if the stack is empty
    int x=-1;
    if(top==nullptr){
        cout<<"Stack is empty "<<endl;
    }
    else{
        node *temp=top;
        x=top->data;
        top=top->next;
        delete (temp);
    }
    return x;
}

/// This is the function to display all the elements of the stack
void Stack::display() {
    // Check if the stack is empty
    if(top ==NULL)
    {
        cout<<"Stack is empty"<<endl;
        return;
    }
    else
    {
        node *temp=top;
        cout<<"The stack is "<<endl;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}

int main()
{
    Stack stk;
    stk.push(21);stk.push(53);
    stk.display();
    cout<<"Element Popped "<<stk.pop()<<endl;
    cout<<"Element Popped "<<stk.pop()<<endl;
    cout<<"Element Popped "<<stk.pop()<<endl;
    return 0;
}

