/* The solution of the problem of ambiguity in multipath inheritance are :
		1. Use of virtual function
		2. Use of scope resolution operator

Virtual function resolve the conflict of 2 copies of the function of base class in class D at runtime and that defines a path through it will access
the data of the base class.
*/

#include <iostream>
using namespace std;

class base
{	public :
	void display ()
	{
		cout <<" this is the class A function"<<endl;
	 }
};
class B :virtual public base
{	public :
	void fun ()
	{
		cout <<" this is the class B function fun"<<endl;
	 }
};
class C :virtual public base
{	public :
	void joy ()
	{
		cout <<" this is the class C function joy"<<endl;
	 }
};
class D : public B, public C
{	public :
	void print ()
	{
		cout <<" thi is the class D function"<<endl;
	 }
};
int main ()
{
	D obj1 ;
	obj1.display();
	obj1.B::fun();						// this could be the method as well
	obj1.C::joy();
	obj1.B::display();				/* In this way we are manually defining the path to access the function of base class, there are still 2 copies
														of the function display() in class D*/
	obj1.C::display();
	obj1.base::display();
	return 0;
}


/* 

LINK TO COMPLETE EXPLANATION OF MULTIPLE INHERITANCE AND DIAMOND PROBLEM AND ITS SOLUTION

https://www.geeksforgeeks.org/multiple-inheritance-in-c/

*/