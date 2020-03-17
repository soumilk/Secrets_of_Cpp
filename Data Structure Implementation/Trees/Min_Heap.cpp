// This is the program for making the min heap 

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

// The function to heapify the array, min heap here
// Complexity O(log n)
void min_heapify(int *arr,int parent,int n)
{
	int left=2*parent;
	int right=2*parent+1;
	int smallest=parent;
	if (left<=n && arr[left]<arr[parent])
	{
		smallest=left;
	}
	if(right<=n && arr[right]<arr[smallest])
	{
		smallest=right;
	}
	if (smallest!=parent)
	{
		swap(arr[smallest],arr[parent]);
		min_heapify(arr,smallest,n);
	}
}

// Function to create a min heap 
// Complexity O(n) 
void min_heap(int arr[],int n)
{
	// This loop runs n/2 times, O(n/2) => O(n) 
	for(int i=n/2;i>=1;i--)
	{
		min_heapify(arr,i,n);
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
	min_heap(arr,n);
	return 0;
}
