// This program demonstrate how we can use the sort function and custom comparator function to get the 
// desired result after applying sort to strings.

#include<iostream>
#include<algorithm>
using namespace std;

// Function to print the array of strings 
void print(string arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

/*
Function: compare_dec
arguments: This takes 2 strings as argument to apply the defined comparasion operation
functionality: This is a custom comparator function which sorts the strings array in the decreasing order 
return type: bool
*/
bool compare_dec(string s1, string s2)
{
    return s1>s2;
}

/*
Function: compare_len
arguments: This takes 2 strings as argument to apply the defined comparasion operation
functionality: This is a custom comparator function which sorts the strings array according to the length 
return type: bool
*/
bool compare_len(string s1,string s2)
{
    return s1.length()<s2.length();
}

int main()
{
    string arr[]={"banana","Apple","almond","pineapple","Bannnaanna"};
    int n= sizeof(arr)/ sizeof(arr[0]);
    cout<<"The string array is :"<<endl;
    print(arr,n);
    cout<<"After sorting in ascending order :"<<endl;
    sort(arr,arr+n);
    print(arr,n);
    cout<<"After sorting in descending order :"<<endl;
    sort(arr,arr+n,compare_dec);
    print(arr,n);
    cout<<"After sorting according to the increasing length :"<<endl;
    sort(arr,arr+n,compare_len);
    print(arr,n);
    return 0;
}
