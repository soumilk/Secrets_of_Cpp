/*
* This is a program to demonstrate:
    - Variable passing as address to the function
    Explanation: 
      * Here we pass the Variables address as argument to the functions, now 
      as the address is passed, we need pointers of th same type as that of the varbales 
      to store the address.
      *Now any changes that occur with the values of the pointer, we will be directly
      refelected in the original Variables.
      * NOTE: POINTER ALWAYS CONSUMES SAME MEMORY IRRESPECTIVE OF THE TYPE OF 
      POINTER< BECAUSE ULTIMATELY ITS OBJECTIVE IS TO STORE THE ADDRESS
*/

#include<iostream>
using namespace std;


// To catch the address, we need to take them into the pointer as they stores
// the address. Note that the pointer should be of the same type as of varibale
void fun(int* n, int* m){
    cout<<"n :"<<n<<" m :"<<m<<endl;        // These will print the address
    cout<<"*n :"<<*n<<" *m :"<<*m<<endl;    // These will print the values at the address 
}

// Swap function to swap th values, as arguments are via address, so the changes 
// would be directly occured at the memory of the real parameters. 
void swap(int* n, int* m){
    int temp= *n;
    *n=*m;
    *m=temp;
}

// In 64 bit systems, the size of the pointer is 8 bytes
void forsizevalidation( bool* p){
    cout<<"size of p "<<sizeof(p)<<endl;
    cout<<"size of *p "<<sizeof(*p)<<endl;
    cout<<"size of &p "<<sizeof(&p)<<endl;
}

int main ()
{
    int n=10;
    int m=20;
    bool a=true;
   
    // We are passing the varibales by address
    fun(&n, &m);
    swap(&n,&m);
    cout<<"After calling the swap function: "<<
        "n :"<<n<<" m :"<<m<<endl;
     cout<<"size of bool variable a :"<<sizeof(a)<<endl;
     forsizevalidation(&a);
    return 0;
}
