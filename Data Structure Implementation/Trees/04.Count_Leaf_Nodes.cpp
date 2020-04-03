//
// Created by soumil on 4/2/2020.
//
// Binary Tree Implementation C++ - COUNT NUMBER OF LEAF NODES IN THE BINARY TREE
/*
 * This is the implementation for the Binary Tree.
 * Code performs some basic operations like
        1. Creation
        2. INORDER Traversal
        3. COUNT TOTAL NUMBER OF LEAF NODES IN THE TREE
 */
#include <iostream>
#include<queue>
#include <stack>
using namespace std;

class Node{
public:
    Node *lchild;
    int data;
    Node *rchild;
    // Default constructor
    Node(){lchild=rchild=nullptr; data=0;}
};
class BinaryTree{
public:
    Node *root ;        // This will point to the root node of the binary tree
    // Default constructor
    BinaryTree(){ root= nullptr;}
    void Create();
    int Count_Leaf_Nodes(Node *);
    void Inorder(Node *);
};

/// This is the function to create the binary tree
void BinaryTree::Create() {
    root=new Node;
    cout<<"Enter the data of the root :";
    cin>>root->data;
    queue<Node*>q;      // Queue to store the data nodes of the tree
    q.push(root);
    Node *temp,*newNode;
    while(!q.empty()){
        int x;
        temp=q.front();
        q.pop();
        cout<<"Enter the left child of,"<<temp->data<<" enter -1 if there is no node: ";
        cin>>x;
        cout<<endl;
        if(x!=-1){
            newNode =new Node;
            newNode->data=x;
            temp->lchild=newNode;
            q.push(newNode);
        }
        cout<<"Enter the right child of,"<<temp->data<<" enter -1 if there is no node: ";
        cin>>x;
        cout<<endl;
        if(x!=-1){
            newNode =new Node;
            newNode->data=x;
            temp->rchild=newNode;
            q.push(newNode);
        }
    }
}

/// FUNCTION TO CALCULATE ALL THE NODES IN THE BINARY TREE
int BinaryTree::Count_Leaf_Nodes(Node *root) {
    if(root==nullptr) return 0;
    if(root->rchild ==nullptr && root->lchild==nullptr){
        // Return 1 whenever root reaches a nodes where the left and right child are null
        return 1;
    }
    int x=Count_Leaf_Nodes(root->lchild);
    int y=Count_Leaf_Nodes(root->rchild);
    return x+y;
}

/// Function for the Inorder traversal of the tree
void BinaryTree::Inorder(Node *root) {
    if(root==nullptr){
        return;
    }
    Inorder(root->lchild);
    cout<<root->data<<" ";
    Inorder(root->rchild);
}
int main()
{
    BinaryTree btree;
    btree.Create();
    cout<<"Inorder Traversal of the Tree is "<<endl;
    btree.Inorder(btree.root);
    cout<<endl;
    cout<<"Total number of Leaf Nodes in the tree are "<<btree.Count_Leaf_Nodes(btree.root);
    return 0;
}
