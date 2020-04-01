//
// Created by soumil on 4/1/2020.
//
// Binary Tree Implementation C++ - ITERATIVE TRAVERSAL METHODS
/*
 * This is the implementation for the Binary Tree.
 * Code performs some basic operations like
        1. Creation
        2. Tree Traversal :
            ITERATIVE PreOrder traversal
            ITERATIVE InOrder traversal
            LevelOrder traversal
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
    int Height(Node *);
    void Iterative_Preorder(Node *);
    void Iterative_Inorder(Node *);
    void LevelOrder(Node *);
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

/// Function or the ITERATIVE PREORDER traversal of the tree
void BinaryTree::Iterative_Preorder(Node *root) {
    if(root==nullptr){
        return;
    }
    stack<Node*>ss;
    while(root!=nullptr || !ss.empty()){
        if(root!=nullptr){
            cout<<root->data<<" ";
            ss.push(root);
            root=root->lchild;
        }
        else{
            root=ss.top();
            ss.pop();
            root=root->rchild;
        }
    }
}

/// Function for the ITERATIVE INORDER traversal of the tree
void BinaryTree::Iterative_Inorder(Node *root) {
    if(root==nullptr){
        return;
    }
    stack<Node*>ss;
    while(root!=nullptr || !ss.empty()){
        if(root!=nullptr){
            ss.push(root);
            root=root->lchild;
        }
        else{
            root=ss.top();
            cout<<root->data<<" ";
            ss.pop();
            root=root->rchild;
        }
    }

}


/// This is the function for the level order traversal of the tree
void BinaryTree::LevelOrder(Node *root) {
    queue<Node*>q;
    q.push(root);
    Node *temp= nullptr;
    //cout<<root->data<<" ";
    while(!q.empty()){
        temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->lchild){
            q.push(temp->lchild);
        }
        if(temp->rchild){
            q.push(temp->rchild);
        }
    }
}

int main()
{
    BinaryTree btree;
    btree.Create();
    cout<<"The Preorder traversal of the tree ";
    btree.Iterative_Preorder(btree.root);
    cout<<endl;
    cout<<"The Inorder traversal of the tree ";
    btree.Iterative_Inorder(btree.root);
    cout<<endl;
    cout<<"The Level order traversal of the tree ";
    btree.LevelOrder(btree.root);
    cout<<endl;
    cout<<"The height of the tree is "<<btree.Height(btree.root);
    return 0;
}
