/*
 * THIS CODE DEPICTS THE APPLICATION OF THE FUNCTORS, THESE ARE THE FUNCTIONS THAT 
   WORK AS OBJECTS VIA OVERLOADING. 
 */

#include<iostream>
using namespace std;

class car_comp
{
	public:
	// operator overloading 
	void operator ()()  //overloading the operator () another () is because function is not 
	                    //taking any arguments.
	{
		cout<<"This is the overloading function operator "<<endl;
	}	
};
int main()
{
	car_comp cc;
	cc();               // this will automatically call the overloaded function in class
	return 0;
}
