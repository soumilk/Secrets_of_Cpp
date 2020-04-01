//
// Created by soumil on 3/31/2020.
// DOUBLY LINEAR LINKED LIST in C++- REVERSE THE LINEAR DOUBLY LINKED LIST
/*
 * This is the implementation for the Linear doubly linked list.
 * Code performs some basic operations like:
        1. Insertion
        2. Display
        3. Find Length
        4. REVERSE THE DOUBLY LINEAR LINKED LIST
 */
#include<iostream>
using namespace std;

// creating a node of the doubly linked list 
class node{
	public:
		node *left;
		node *right;
		int data;
}*first=nullptr;

void create(const int arr[],int n)
{
	node *last=nullptr;
	if(first==nullptr)
	{
		first=new node;
		first->data=arr[0];
		first->left=first->right=nullptr;
	}
	last=first;
	for(int i=1;i<n;i++)
	{
		node *temp=new node;
		temp->data=arr[i];
		temp->left=last;
		temp->right=last->right;
		last->right=temp;
		last=temp;
	}
}

void display(struct node *start)
{
	cout<<"The doubly Linked list is "<<endl;
	while(start!=nullptr)
	{
		cout<<start->data<<" ";
		start=start->right;
	}
	cout<<endl;
}

// This is a function to count and return thr number of nodes present 
// in the linked list-
int count(node *start)
{
	int counter=0;
	while(start!=nullptr)
	{
		counter++;
		start=start->right;	
	}	
	return counter;
}

// This is a function in which, we perform an operation of insertion of a value at 
// a certain given index at a given  position in doubly linked list
void insert_at_pos(int value,int pos)
{
	node *temp=first;
	if(pos<0 || pos>count(temp)) {
		cout<<"Invalid position"<<endl;
		return;
	}
	if(pos==0)
	{
		node *new_node=new node;
		new_node->data=value;
		new_node->left= nullptr;
		new_node->right=temp;
		temp->left=new_node;
		first=new_node;
	}
	else{
		for(int i=0;i<pos-1 && temp;i++) temp=temp->right;
		node *new_node =new node;
		new_node->data=value;
		new_node->left=temp;
		new_node->right=temp->right;
		if(temp->right)
		    temp->right->left=new_node;  
		temp->right=new_node;
	}
	cout<<"Value "<<value<<" is inserted at position "<<pos<<endl;
}

/// FUNCTION TO REVERSE THE DOUBLY LINEAR LINKED LIST
void reverse(node* head) {
    cout<<"This is a function to reverse the Doubly linear linked list"<<endl;
    node* temp = head;
    node* newHead = head;
    while (temp != nullptr) {
        node* prev = temp->left;
        temp->left = temp->right;
        temp->right = prev;
        newHead = temp;
        temp = temp->left;
    }
    first=newHead;
}
int main()
{
	int arr[]={40,23,15,76,32,11,51};
	create(arr,sizeof(arr)/sizeof(int));
	display(first);
	cout<<"Total number of nodes in the doubly linked list is "<<count(first)<<endl;
	insert_at_pos(67,3);
	insert_at_pos(85,5);
	insert_at_pos(29,0);
	insert_at_pos(39,1);
	display(first);
	reverse(first);
	display(first);
	return 0;
}
