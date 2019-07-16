/* When initializing a variable, the auto keyword can be used in place of the variable type
to tell the compiler to infer the variable’s type from the initializer’s type. This is called
type inference (also sometimes called type deduction).
This feature is introduced in the newer version of c++.
Note: This feature  only works when initializing a variable upon creation. Variables created without
initialization values can not use this feature (as C++ has no context from which to deduce the type).
FOR MORE INFO, CHECK OUT THIS LINK  "https://www.learncpp.com/cpp-tutorial/4-8-the-auto-keyword/"
*/

#include<iostream>
using namespace std;
int* function();                    // function which takes no agruments and return the integer 

int main()
{
    int *(*ptr)();                  // here ptr is a pointer to the function which takes no arguments and returns a int pointer 
    ptr=& function;                 // This will still work if I remove the '&' sign, i.e. ptr=function; 
    auto *x=ptr();
    cout<<*x<<endl;
    return 0;
}
int *function()
{
    static int a =10;               // Only because it is a static variable, its scope extends beyond the scope of the function 
    return &a;                      // and that is why we can return the address of the variable which is accessible outside the function.
}                                   // If we remove the static keyword from the line 24, then it will give us the segmentation fault.
