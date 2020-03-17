// This is the program for making the max heap 

#include<iostream>
using namespace std;

// This is the swap function which takes 2 arguments by address and changes the 
// values at the address of the variables
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

// The function to heapify the array, max heap here
// Complexity O(log n)
void max_heapify(int *arr,int parent,int n)
{
	int left=2*parent;
	int right=2*parent+1;
	int largest=parent;
	if (left<=n && arr[left]>arr[parent])
	{
		largest=left;
	}
	if(right<=n && arr[right]>arr[largest])
	{
		largest=right;
	}
	if (largest!=parent)
	{
		swap(arr[largest],arr[parent]);
		max_heapify(arr,largest,n);
	}
}

// Function to create a max heap 
// Complexity O(n) 
void max_heap(int arr[],int n)
{
	// This loop runs n/2 times, O(n/2) => O(n) 
	for(int i=n/2;i>=1;i--)
	{
		max_heapify(arr,i,n);
	}
	cout<<"This is the min heap "<<endl;
	for(int i=1;i<n+1;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n+1]={0};
	for(int i=1;i<n+1;i++)
	{
		cin>>arr[i];
	}
	max_heap(arr,n);
	return 0;
}
