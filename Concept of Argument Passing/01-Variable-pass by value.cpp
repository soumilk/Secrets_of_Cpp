/*
* This is a program to demonstrate:
    - Variable passing as a value to the function
    Explanation: 
    *   When we pass the argument by value, then the compiler just 
        makes up a new memory in the function and copies the actual passed parameter
        value in the called function.
    *   In such a case, all the changes done in the function upon that passed 
        argument will not refelect in the actual variable.
*/

#include <iostream>
using namespace std;

/*
In all the functions below, the arguments are called and formal parameters which 
consume space equivalent of the actual parameters, i.e. why this type of argument
passing is called 'call by value'. 
*/
void fun(int var1){
    cout<<"integer as an argument"<<endl;
    var1+=10;                                  // value changes to 21
    cout<<"New var1 value :"<<var1<<endl;
}

void fun(double var2){
    cout<<"double as an argument"<<endl;
}

void fun(bool var3){
    cout<<"bool as an argument"<<endl;
}

void fun(int var1, double var2, bool var3){
    cout<<"Values are "
    <<" var1 = "<<var1
    <<" var2 = "<<var2
    <<" var3 = "<<var3<<endl;
}

int main()
{
    // All of these are actual parameters 
    int var1=11;
    double var2= 12.59;
    bool var3=false;
    // Here we have used the concept of function overloading, as multiple functions
    // have same name but different types of arguments
    fun(var1);
    cout<<"var1 in main function :"<<var1<<endl;    // Still var1=11
    fun(var2);
    fun(var3);
    fun(var1,var2,var3);
    return 0;
}
