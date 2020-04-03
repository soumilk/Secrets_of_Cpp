//
// Created by soumil on 4/3/2020.
//
// Binary Tree Implementation C++ - CALCULATE THE HEIGHT OF THE BINARY TREE 
/*
 * This is the implementation for the Binary Tree.
 * Code performs some basic operations like:
        1. Creation
        2. Tree Traversal 
            InOrder traversal
        3. FIND HEIGHT OF THE TREE
 */
#include <iostream>
#include<queue>
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
    int Height(Node *);
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

/// Function for the Inorder traversal of the tree
void BinaryTree::Inorder(Node *root) {
    if(root==nullptr){
        return;
    }
    Inorder(root->lchild);
    cout<<root->data<<" ";
    Inorder(root->rchild);
}

/// This is a FUNCTION TO CALCULATE THE HEIGHT OF THE BINARY TREE
int BinaryTree::Height(Node *root) {
    if(root==nullptr){
        return -1;
    }
    int x=1+Height(root->lchild);
    int y=1+Height(root->rchild);
    return max(x,y);
}

int main()
{
    BinaryTree btree;
    btree.Create();
    cout<<"The height of the tree is "<<btree.Height(btree.root);
    return 0;
}
