#include<iostream>

/*
*
* @author Avinash Mager
* Smart pointer are a kind of pointers whose destruction happens impliceitely.
* Usually these are the wrappers over the pointer variable/object.
* This program demonstrates the use of smart pointers by aking an example of calculation of factorial. 
*/

using namespace std;

class Factorial
{
	unsigned long *ptr;
	public:
		Factorial()
		{

		}

		explicit Factorial(long num)
		{
			ptr = new unsigned long(num);
		}

		~Factorial()
		{
			delete ptr;
		}

		unsigned long CalculateFactorial()
		{
			if ( *ptr == 0 )
				return 1;
			long tmp = *ptr;
			while(--tmp)
			{
				*ptr = *ptr * tmp;
			}
			return *ptr;
		}

};

int main()
{
	long num;
	cout << "Enter Number: ";
	cin >> num;
	Factorial fact(num);
	cout << "Factorial of given number : " << fact.CalculateFactorial() << endl;
	return 0;	
}
