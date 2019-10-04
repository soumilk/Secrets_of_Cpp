#include<iostream>
using namespace std;

int main()
{
  int a =312;
  int *p;
  char *q;
  p=&a;
  // q=&a      This will generate an error because the pointer only holds the value of its own type
  q=(char *) &a; // typecasting of the pointer
  cout<<"p "<<p<<endl;
  cout<<"q "<<q<<endl;
  cout<<"*p "<<*p<<endl;
  cout<<"*q "<<*q<<endl;
  p+=1;
  q+=1;
  cout<<"p "<<p<<endl;        // will increment the count of the pointer by 4 because it is int
  cout<<"q "<<q<<endl;        // unpredictable
  cout<<"*p "<<*p<<endl;      // will give any garbage value
  cout<<"*q "<<*q<<endl;      // unpredictable

  void *ptr;                    // void pointer can point to any type of variable without typecasting
  ptr=&a;
  // cout<<*ptr<<endl;          // this will generate error
  cout<<*(int *)ptr<<endl;
  string b="sass";
  ptr=&b;
  cout<<*(string*)ptr<<endl;
  return 0;
}


/* 

LINK TO COMPLETE EXPLANATION OF POINTERS

https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/

*/