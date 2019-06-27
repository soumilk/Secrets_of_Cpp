#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// This is the binary search function 
bool binarysearch(int arr[],int n)
{
    /* This function binary_search returns the bool value, true if the element is found and 
       false is the element is not found 
    */
    return (binary_search(arr,arr+8,n));    // In built binary search function
}

// This is the function to display the array
void display(int arr[])
{
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={3,1,6,2,9,6,7,4};
    cout<<"This is the initial unsorted array "<<endl;
    display(arr);
    cout<<"Sorting the array using the in built-in sort function in increasing order"<<endl;
    sort(arr,arr+8);
    display(arr);
    cout<<"Element to search is 3"<<endl;
    if(binarysearch(arr,3))
    {
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    cout<<"Element to search is 12"<<endl;
    if(binarysearch(arr,12))
    {
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
