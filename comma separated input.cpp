// In this program we are solving the issue of taking the comma seperated input in c++

/* 
   We need to take the input of array, and the input is given in the form of 
   10,20,30,40,50
   we need to extract the integer part and store it in the array
*/

#include<iostream>
using namespace std;

int main()
{
	int arr[5]={0};		// Initilised the array with 0 at each index
	char comma;			
	for(int i=0;i<4;i++)
	{
		/* 
		   Here we are taking the integer and the charater as the input so
		   the compiler will take the integer value in integer array and comma(,)
		   as the character value in the variable comma
		*/
		cin>>arr[i]>>comma;
	}
	/* Now we need to take the last input number in our array and there is no comma
	after the last digit so we need to take its input separately*/
	cin>>arr[4];
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
