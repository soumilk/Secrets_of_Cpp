/*
* This is a program to demonstrate:
    - Variable passing as a reference to the function
    Explanation: 
    *   When we pass the variable argument by reference, then the compiler just creates 
    	a new memory space with the name of reference and attaches it to the memory
    	location of the variable.
    *   In such a case, all the changes done in the function upon that passed 
        argument as a reference will refelect in the actual variable becasue both 
        of them are actually pointing to the same memory address.
*/

#include <iostream>
using namespace std;

/*
In the function below, the arguments are called and formal parameters which 
consume space equivalent of the actual parameters but points to the same 
memory address as the actual parameter, i.e. why this type of argument
passing is called 'call by reference'. 
*/

void fun(int& x, double& y, double& z){		// Accepting arguments as reference		

	// Here 'x' refer to var1, 'y' refer to var2 and 'z' refer to var3 which itself refer to var2 
    
	cout<<"Values are :"<<" var1 = "<<x<<", var2 = "<<y 
	<<", var3 :"<<z<<endl;				    //Values are : var1 = 11, var2 = 22.59, var3 :22.59
    x+=100; y+=100; z+=100;
}

int main()
{
    // All of these are actual parameters 
    int var1=11;
    double var2= 12.59;
    double& var3= var2;				// var3 is declared as the reference of the var2
    var3+=10;
    cout<<"var1 :"<<var1<<", var2 :"<<var2<<", var3 :"<<var3<<endl;	 // var1 :11, var2 :22.59, var3 :22.59
    
    // The reference variable takes memory equal to the referenced variable type
   	cout<<"Size of reference variable var3 :"<<sizeof(var3)<<endl;   // Size of reference variable var3 :8
   	fun(var1,var2,var3);			

    cout<<"var1 :"<<var1<<", var2 :"<<var2<<
	", var3 :"<<var3<<endl;			// var1 :111, var2 :222.59, var3 :222.59
    return 0;
}
