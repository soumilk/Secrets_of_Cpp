//
// Created by soumil on 4/13/2020.
//
// GENERATION OF BINARY SEARCH TREE IMPLEMENTATION C++ - GENERATE BST FROM POST-ORDER
/*
 * This code is the implementation of the code of generation of BST from POSTORDER given traversal
 * Code performs some of these operations :
    1. BST generation from a given POSTORDER
    2. Inorder traversal

 * NOTE: This code works correctly for the correct POST ORDER traversal of a Binary Search tree.
         Works for the positive values. 
         A way to check if the generated tree is correct is to print the Inorder traversal of the tree,
         as the Inorder traversal of a BST always gives a sorted sequence.
 */
#include<iostream>
#include <stack>
#include<vector>
using namespace std;

class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;

    Node(){lchild=rchild=nullptr; data=0;}  //Default constructor
};

class BinaryTree{
public:
    Node* root;
    BinaryTree(){root =nullptr;}            // Default constructor
    void Postorder_generation(vector<int>);
    void Inorder(Node*);
};

// Function for generation of a Binary Search Tree from a given Post-Order Traversal  
void BinaryTree::Postorder_generation(vector<int>arr) {
    stack<Node*>s;
    int n=arr.size()-1;
    Node* dummy=new Node;
    dummy->data=INT_MIN;
    s.push(dummy);
    root=new Node; root->data=arr[n];
    Node *copy=root;
    s.push(copy);
    int i=n-1;
    while(i>=0){
        Node* temp=new Node;
        temp->data=arr[i];
        if(arr[i]> copy->data){
            copy->rchild=temp;
            --i; s.push(copy);
            copy=temp;
        }
        else if(arr[i]<copy->data && arr[i]>s.top()->data){
            copy->lchild=temp;
            --i; copy=temp;
        }
        else{
            copy=s.top();
            s.pop();
        }
    }
}

// Function to give a Inorder Traversal
void BinaryTree::Inorder(Node* temp) {
    if(temp==nullptr) return;

    Inorder(temp->lchild);
    cout<<temp->data<<" ";
    Inorder(temp->rchild);
}

int main(){
    //vector<int> v={1,4,7,6,3,13,14,10,8};
    vector<int> v={2,14,15,7,6,5,4,3};
    BinaryTree btree;
    btree.Postorder_generation(v);
    btree.Inorder(btree.root);
    return 0;
}
