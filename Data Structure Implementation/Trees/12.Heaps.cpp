//
// Created by soumil on 4/15/2020.
// CREATION OF THE HEAPS
/*
 * This Code implements the Binary Heap DS in C++.
 * The code performs the basic operations :
        1. Insertion
        2. Deletion
 * It is to note that, we can only delete the root element from the Heaps
 * NOTE: Binary Heaps are NOT Binary searh trees
 */
#include <iostream>
#include <vector>
using namespace std;

// Function to insert the element in the heap
void Insert(vector<int>&v,int n){
    int temp=v[n];
    int i=n;
    while(i>1 && temp>v[i/2]){
        v[i]=v[i/2];
        i=i/2;
    }
    v[i]=temp;
}

// Function to Delete the elements in the heap
int Delete(vector<int>&v,int n){
    int val=v[1],x=v[n];
    v[1]=v[n];
    v[n]=val;
    int temp;
    int i=1,j=2*i;
    while(j<n-1){
        if(v[j+1]>v[j]) j=j+1;
        if(v[i]<v[j]){
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i=j;
            j=2*i;
        }
        else
            break;
    }
    return val;
}
int main()
{
    vector<int> v={0,10,20,30,25,5,40,35};
    for(int i=2;i<v.size();i++) Insert(v,i);

    //  Now the Heap is
    for(int i=1;i<v.size();i++)
        cout<<v[i]<<" ";

    // As we delete the elements from the heap,
    // the output will be in a sorted order
    for(int i=v.size()-1;i>1;i--){
        Delete(v,i);
    }
    for(int i=1;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
