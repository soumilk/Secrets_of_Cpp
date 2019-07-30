/* 
 * IN THIS PROGRAM WE ARE GONNA SEE THE USE OF this POINTER
 * 'this' pointer is a constant pointer which keeps the address of the current object.
 * 'this' is a special pointer (implicit pointer). 
*/
#include<iostream>
using namespace std;


class demo
{
	int a,b;
	public:
		demo(int a,int b)
		{
			// 1- USE OF this
			cout<<"This is the constructor"<<endl;
			this->a=a;
			this->b=b;
		}
		demo displaya()
		{
			cout<<"a "<<a<<endl;
			return *this;
		}
		demo displayb()
		{
			cout<<"b "<<b<<endl;
			return *this;
		}
		demo multiply()
		{
			cout<<"a*b "<<a*b<<endl;
			return *this;
		}
};
int main()
{
	demo obj1(10,20);
	
	// These are the normal function calls 
	obj1.displaya();
	obj1.displayb();
	obj1.multiply();
	 
	//  Now if I need to do funtion calling in a chain then I need to have a object to call the 
	//  function, so we require to return the object from the funcitons.
	cout<<"\nThis is the chain function calling "<<endl;
	
	// 2- USE OF this
	obj1.displaya().displayb().multiply();
	
	return 0;
}


