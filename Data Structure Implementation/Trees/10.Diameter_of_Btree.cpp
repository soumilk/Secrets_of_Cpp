//
// Created by soumil on 4/13/2020.
//
// Binary Tree Implementation C++ -Diameter of a Binary Tree
/*
 * This is the program to find the diameter of a binary tree, diameter of the binary tree
   is equal to the maximum distance between the two nodes, the diameter may or may not pass
   through the root node.
 * Code performs some basic operations like:
        1. Creation
        2. Tree Traversal:
            LevelOrder traversal
        3. Find the Diameter of the tree
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
private:
    int rec(Node *,int&);
public:
    Node *root ;        // This will point to the root node of the binary tree
    // Default constructor
    BinaryTree(){ root= nullptr;}
    void Create();
    void LevelOrder(Node *);
    int DiameterofBtree(Node *);
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

/// This is the parent function and is used to compute the diameter of the binary tree
int BinaryTree::DiameterofBtree(Node* temp) {
    int d=0;
    rec(temp, d);
    return d+1;
}
/// This function is used to compute the diameter using heights
int BinaryTree::rec(Node* root, int &d) {
    if(root == nullptr) return 0;
    int ld = rec(root->lchild, d);
    int rd = rec(root->rchild, d);
    d=max(d,ld+rd);
    return max(ld,rd)+1;
}

int main()
{
    BinaryTree btree;
    btree.Create();
    cout<<"The Level order traversal of the tree ";
    btree.LevelOrder(btree.root);
    cout<<endl;
    cout<<"The Diameter of the tree is "<<btree.DiameterofBtree(btree.root);
    return 0;
}
