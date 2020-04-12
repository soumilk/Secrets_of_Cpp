//
// Created by soumil on 4/6/2020.
// GENERATION OF BINARY SEARCH TREE IMPLEMENTATION C++ - GENERATE BST FROM PREORDER
/*
 * This code is the implementation of the code of generation of BST from Inorder given traversal
 * Code performs some of these operations :
    1. BST generation from a given preorder
    2. Inorder traversal
    
 * NOTE: This code works correctly when input is provided in the preorder of only a Binary search tree,
         also, the code works for the positive values
 */
#include<iostream>
#include <vector>
#include <stack>
using namespace std;

class Node{
public:
    Node *lchild;
    int data;
    Node *rchild;
    Node(){
        lchild=rchild=nullptr;
        data=0;
    }
};

class Binary_Search_Tree{
public:
    Node *root;
    Binary_Search_Tree(){ root=nullptr;}
    void Preorder_generation(vector<int>);
    void Inorder(Node*);
};

/// This is FUNCTION TO GENERATE BINARY SEARCH TREE FROM GIVEN PREORDER for a BST
void Binary_Search_Tree::Preorder_generation(vector<int> arr) {
    if(arr.empty()) return;
    root=new Node;
    Node *p=nullptr;
    root->data=arr[0];
    p=root;
    stack<Node *> s;
    Node *dummy=new Node;       // This is a dummy node with maximum value to be pushed first in the stack
    dummy->data=INT_MAX;        // to handle the edge case of the code
    s.push(dummy);
    s.push(p);
    int i=1;
    while(i<arr.size()){
        Node *temp=new Node;
        temp->data=arr[i];
        if(arr[i] < p->data){
            p->lchild=temp;
            s.push(p);
            p=temp; i++;
        }
        else if(arr[i]>p->data && arr[i]<s.top()->data){
            p->rchild=temp;
            p=temp; i++;
        }
        else{
            p=s.top();
            s.pop();
        }
    }
}

/// Function to give Inorder traversal of the binary search tree
void Binary_Search_Tree::Inorder(Node *start) {
    // Base case
    if(start==nullptr) return;
    // Recursive case
    Inorder(start->lchild);
    cout<<start->data<<" ";
    Inorder(start->rchild);
}

int main()
{
    //vector<int> v={30,20,10,15,25,40,50,45};
    //vector<int>v ={25,20,10,5,12,22,36,30,28,40,38,48};
    vector<int>v ={8,3,1,6,4,7,10,14,13};
    Binary_Search_Tree btree;
    btree.Preorder_generation(v);
    // The inorder generated after the generation of the BST should provide us with the sorted order
    btree.Inorder(btree.root);
    return 0;
}
