/* 
 * IN THIS PROGRAM WE ARE GONNA SEE THE CONCEPT OF THE sizeof() OPERATOR IN C++ 
 * sizeof operator returns the unsigned int type of value which denotes the size 
 or the memory taken by the operand.
 * sizeof(operand), operand might be primary types such as int, float and compound
 data type such as structure and union.
 * Size of any operand will never be zero, zero size implies that operand does not exist, 
 therefore when we talk about the size of empty class or empty function then the minimum
 size that the compiler can provide them is 1 byte.
 * When we talk about the memory taken by the class and the function, then the sizeof 
 them is not just the sum of size of their data members. There is a concept called as 
 the PADDING BYTES, in such cases.
 * Padding bytes is a wastage of memory.
 
*/
#include<iostream>
using namespace std;

class demo{
};
class learn{
	private:
	/*  int a;		// 4 bytes 
		int b;  	// 4 bytes
		double c;   // 8 bytes
		// total =16 bytes
	*/
		int a;      // 4 bytes
		double b;	// 8 bytes
		// total is 12 bytes but the answer will be 16 bytes, becase of the concept on class padding
		
	/*	double a;
		int b;
		double c;
    // total should be 20 but the size will be 24 bytes
	*/
};
int main()
{
	demo d;
	cout<<sizeof(d)<<endl;
	// The the size of an empty class is 1 byte.
	
	learn l;
	cout<<sizeof(l)<<endl;
		/*
		Whenever a memory block for a particular data type is created in the memory of a class, then
		it then before forming memory data types says that "I WANT THE IDENTICAL MEMORY BLOCK BEFORE 
		ASSIGNMENT OF MY MEMORY", i.e. in the example above of class :
			
			int a ; 	4 bytes of memory is assigned 
			double b;   now double wants a 8 byte of memory block before its formation,
						so it will make the compiler add the padding bytes, i.e. a 4 bytes of 
						padding will be added to the class storage after 'int' memory then 
						after that double will occupy memory.
				 
		*/		

 /* Best way to declare the variables in the class or strucure is in the decending or in the 
    assending order of their sizes to prevent the addition of unnessary addition of padding bytes*/ 
	return 0;
}


/* 

LINK TO COMPLETE EXPLANATION OF SIZEOF

https://en.cppreference.com/w/cpp/language/sizeof

*/

