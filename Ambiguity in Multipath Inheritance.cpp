#include <iostream>
using namespace std;

/*  It is famously known as diamond problem in computer programming.
In this problem, the compiler is confused because multiple copies of the base class are received from different classes.
This problem usually occur in the multipath inheritance */

class base
{	public :
	void display ()
	{
		cout <<" this is the class A function"<<endl;
	 }
};
class B : public base
{	public :
	void display ()
	{
		cout <<" this is the class B function"<<endl;
  }
};
class C : public base
{	public :
	void display ()
	{
		cout <<" this is the class C function"<<endl;
  }
};
class D : public B, public C
{	public :
	void print ()
	{
		cout <<" thi is the class D function"<<endl;
	 }
	/*void display()																							 If we make this function active then there would be no error
	{																															because the function display() would be simply overridden
		cout<<"This is the display function in class D"<<endl;			by the function of class D
	}*/

};
int main ()
{
	D obj1 ;
	obj1.display();
	return 0;
}
