// Created by soumil on 7/2/2019.
//
// Different ways in which strings are declared or taken as input in c++

#include<iostream>
#include<string>
using namespace std;

// Function to print out the array elements
void print(string arr[],int n)
{
    cout<<"The string array is ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    // METHODS TO TAKE INPUTS IN STRINGS
    string s1("Hello how are you!!");
    cout<<s1<<endl;

    string s2= "I am good";
    cout<<s2<<endl;

    /*
       In this way of taking input in strings, it does not take input of multiple words, i.e.
       with this way we can only get the input of a word but not a line.
    */
    /*
    string s3;
    cin>>s3;
    cout<<s3<<endl;
    */

    // This is a preferred method to take input of strings
    string s4;
    cout<<"Enter the string"<<endl;
    getline(cin,s4);
    cout<<s4<<endl;

    // SIZE OF STRING ???
    
    char ch;
    // Only the size of 1 byte is provided to the character
    cout<<"Size of a character :"<<sizeof(ch)<<endl;
    string s;
    cout<<"size of the string s :"<<sizeof(s)<<endl;
    // The size of the string is 32 bytes.
    string arr[]={"a","desafscdesrvetabdsvsnyhynbavsvbyrnyutnsgbgfndtywjnstbsdgfnyzfbt",
                      "sa","Aerzbrvvvvrgw",
                      "d","wsaceasdc"};
    /*
       From here we can see that irrespective of the string provided, the assigned
       size to string type is 32 bytes.
    */
    int n= sizeof(arr)/ sizeof(arr[0]);
    print(arr,n);
    cout<<sizeof(arr[0])<<" "<<sizeof(arr[1])<<" "<<sizeof(arr[2])<<endl;

    return 0;
}
