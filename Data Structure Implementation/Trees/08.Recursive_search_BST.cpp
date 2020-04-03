//
// Created by soumil on 4/3/2020.
// BINARY SEARCH TREE IMPLEMENTATION IN C++ - RECURSIVE SEARCH OPERATION
/*
 * This code is the implementation of the binary search tree using Linked List.
 * Code performs some basic operations like:
    1. Insertion
    2. Inorder Traversal of tree
    3. RECURSIVE SEARCH OF THE VALUE IN BST
 * NOTE: A binary search tree ideally do  not contain the duplicate nodes, so we do not insert the
         duplicate values of nodes in this BST.
 */
#include <iostream>
using namespace std;

/// This is a class for the Node of  binary search tree
class Node{
public:
    Node *lchild;
    int data;
    Node *rchild;
    // Default Constructor
    Node(){
        lchild=rchild=nullptr; data=0;
    }
};

/// This is the class for the Binary Search Tree
class Binary_Search_Tree{
public:
    Node *root;
    Binary_Search_Tree(){ root=nullptr;}
    void Insert(int);
    void Rec_Search (Node* ,int);
    void Inorder(Node *);
};

/// This is FUNCTION TO INSERT THE NODE IN THE TREE
void Binary_Search_Tree::Insert(int value){
    Node *new_node=new Node;
    if(root==nullptr){
        root=new Node;
        root->data=value;
        return;
    }
    Node *temp=root;
    Node *tail=nullptr;
    while(temp!=nullptr){
        tail=temp;
        if(temp->data<value){
            temp=temp->rchild;
        }
        else if (temp->data>value){
            temp=temp->lchild;
        }
        else{
            // Case when the duplicate value is encountered
            cout<<"\nThe value "<<value<<" is already present in the tree"<<endl;
            return ;
        }
    }
    new_node->data=value;
    if(tail->data<value){
        tail->rchild=new_node;
    }else
        tail->lchild=new_node;
}

/// This function performs INORDER traversal on the BST
void Binary_Search_Tree::Inorder(Node *root){
    if(root==nullptr){
        return;
    }
    Inorder(root->lchild);
    cout<<root->data<<" ";
    Inorder(root->rchild);
}

/// THIS FUNCTION PERFORMS SEARCH ON THE BINARY SEARCH TREE
void Binary_Search_Tree::Rec_Search(Node *root,int value) {
    if(root==nullptr){
        cout<<"Value "<<value<<" not found "<<endl;
        return ;
    }
    if(root->data==value){
        cout<<"Value "<<value<<" Found"<<endl;
        return;
    }
    else if(value < root->data)
        Rec_Search(root->lchild,value);
    else
        Rec_Search(root->rchild,value);
}

int main()
{
    Binary_Search_Tree btree;
    int arr[]={9,15,5,20,16,8,12,3,6};
    int n= sizeof(arr)/ sizeof(int);
    for(int i=0;i<n;i++)
        btree.Insert(arr[i]);
    cout<<"The Binary Search Tree formed is "<<endl;
    btree.Inorder(btree.root);
    btree.Insert(16);
    btree.Rec_Search(btree.root,18);
    btree.Rec_Search(btree.root,12);
    return 0;
}
