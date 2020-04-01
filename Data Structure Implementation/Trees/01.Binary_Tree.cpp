//
// Created by soumil on 4/1/2020.
//
// Binary Tree Implementation C++
/*
 * This is the implementation for the Binary Tree.
 * Code performs some basic operations like:
        1. Creation
        2. Tree Traversal :
            PreOrder traversal
            InOrder traversal
            PostOrder traversal
            LevelOrder traversal
        3. Find Height of tree
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
    void Preorder(Node *);
    void Postorder(Node *);
    void Inorder(Node *);
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

/// Function or the Preorder traversal of the tree
void BinaryTree::Preorder(Node *root) {
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->lchild);
    Preorder(root->rchild);
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

/// Function for the Postorder traversal of the tree
void BinaryTree::Postorder(Node *root) {
    if(root==nullptr){
        return ;
    }
    Postorder(root->lchild);
    Postorder(root->rchild);
    cout<<root->data<<" ";
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

/// This is the function to calculate the height of the binary tree
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
    cout<<"The Preorder traversal of the tree ";
    btree.Preorder(btree.root);
    cout<<endl;
    cout<<"The Inorder traversal of the tree ";
    btree.Inorder(btree.root);
    cout<<endl;
    cout<<"The Postorder Traversal of the tree ";
    btree.Postorder(btree.root);
    cout<<endl;
    cout<<"The Level order traversal of the tree ";
    btree.LevelOrder(btree.root);
    cout<<endl;
    cout<<"The height of the tree is "<<btree.Height(btree.root);
    return 0;
}
