//
// Created by soumil on 3/26/2020.
//
#include<iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T *st;      // Pointer to store the dynamic memory for the stack
    int size;
    int top;
public:
    // Default Constructor
    Stack(){
        size=10;    // default size of the stack
        st=new T[size];
        top=-1;
    }
    // Parameterised constructor
    Stack(int size)
    {
        this->size=size;
        st=new T[size];
        top=-1;
    }

    // Functions of the stack, defined outside the class
    void push(T x);
    T pop();
    T stacktop();
    bool isempty();
    bool isfull();
    T peek(int);
    void display();
};

/// This is the function to push the elements in the stack
template <class T>
void Stack<T>::push(T x)
{
    // Initially check if the stack is full or not
    if(isfull()){
        cout<<"Stack Overflow "<<endl;
        return;
    }
    top++;
    st[top]=x;
}

/// This is the function to pop out the value from the stack
template <class T>
T Stack<T>:: pop()
{
    T x= -1;
    // Check if the stack is empty
    if(isempty()){
        cout<<"Stack Underflow "<<endl;
    }
    else{
        x=st[top];
        top--;
    }
    return x;
}

/// This is the function to check if the stack is empty
template <class T>
bool Stack<T>::isempty() {
    return top==-1;
}

/// This is the funciton to check if the stack is full
template<class T>
bool Stack<T>::isfull() {
    return top==size-1;
}

/// This is a function to display the stack elements
template <class T>
void Stack<T>::display() {
    // Check if the stack is empty
    if(isempty()){
        cout<<"Stack is empty"<<endl;
        return;
    }
    for(int i=top;i>=0;i--)
        cout<<st[i]<<" ";
    cout<<endl;
}

/// This is the funciton to show the top element of the stack
template <class T>
T Stack<T> ::stacktop() {
    T x=-1;
    // Check is the stack is empty
    if(isempty()){
        cout<<"Stack is empty"<<endl;
        return x;
    }
    return st[top];
}

/// This is the funciton by which we can view the element of the stack at
/// a provided index from the top
template <class T>
T Stack<T>::peek(int index) {
    // check is the stack is empty
    T x=1;
    if(isempty()){
        cout<<"Stack is empty"<<endl;
        return x;
    }
    // Check if the index provided is valid or not
    if(top-index+1 <0){
        cout<<"Invalid index given"<<endl;
        return x;
    }
    return st[top-index+1];
}

int main()
{
    Stack<int> s1;
    s1.push(24);s1.push(93);s1.push(76);
    s1.push(33);s1.push(43);s1.push(85);
    s1.display();
    cout<<"Element popped "<<s1.pop()<<endl;
    cout<<"Element at 2 position is "<<s1.peek(2)<<endl;
    cout<<"Top element of the stack is "<<s1.stacktop()<<endl;

    return 0;
}
