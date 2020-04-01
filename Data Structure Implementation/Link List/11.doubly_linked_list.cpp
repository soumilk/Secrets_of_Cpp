//
// Created by soumil on 3/31/2020.
// DOUBLY LINEAR LINKED LIST in C++
/*
 * This is the implementation for the Linear doubly linked list.
 * Code performs some basic operations like:
        1. Insertion
        2. Deletion
        3. Display
        4. Find Length
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

/// This is the function to display the content of the doubly linear linked list
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

// This is a function to delete a node from a certain position from doubly linked list 
void delete_node(node *start,int index)
{
	node *temp=first;
	// check if the index is correct
	if(index <1 ||index>count(start))
	{
		cout<<"Invalid index"<<endl;
		return ;
	}
	if (index==1)
	{
		first=first->right;
		if(first)
		{
			first->left=nullptr;
		}
		delete(temp);
	}
	else{

		for(int i=0;i<index-1;i++) 
		{
			temp=temp->right;
		}	
		temp->left->right=temp->right;
		if(temp->right)
		    temp->right->left=temp->left;
		delete(temp);
	}
	cout<<"Node is deleted from index "<<index<<endl;
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
	delete_node(first,1);
	display(first);
	delete_node(first,6);
	display(first);
	return 0;
}
