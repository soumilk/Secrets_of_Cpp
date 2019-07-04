// THIS CODE CONTAINS THE ACTUAL WORKING CODE OF THE STACK DATA STRUCTURE WITH 3 DIFFERENT CODE DESIGNS, LAST ONE IS THE BEST
// WAY TO USE THE STACKS, ALTHOUGH THIS DS IS ALREADY PRESENT IN STL, BUT ONE SHOULD KNOW THE INTERNAL WORKING OF STACKS 


#include<iostream>
using namespace std;

// 1.SIMPLE IMPLEMENTATION OF STACK 
/*
Class: stack 
Data members: public:
              top->  contaning the index of the top element of the stack
              data-> array of 100 characters to store the stack
Member functions: push-> take a character as a perimeter and insert at the position next to top
                         , increment the top, return nothing
                  empty-> take no argument and check if the stack is empty and return a 
                          bool value
                  pop  -> Return character at top and decrement the top value
*/
/*
class stack             
{
	public:
	int top=-1;
	char data[100];
	void push(char x)
	{
		data[++top]=x;
	}
	bool empty()
	{
		return (top==-1);
	}
	char pop()
	{
		char c=data[top];
		--top;
		return c;
	}
};

int main()
{
	stack s;
	char str[10]="ABCDE";
	for(int i=0;i<5;i++)
	{
		s.push(str[i]);         // push the elements of the array in the stack
	}
	cout<<"Now the reversed string is"<<endl;
	while (!s.empty())           // run untill the stack is empty
	{
		cout<<s.pop()<<" ";
	}
	return 0;
}
*/

// 2. DYNAMIC ALLOCATION OF THE STACK

/*
class stack
{
	public:
	int top=-1;
	char *data;
	void push(char x)
	{
		data[++top]=x;
	}
	bool empty()
	{
		return (top==-1);
	}
	char pop()
	{
		char c=data[top];
		--top;
		return c;
	}
};

int main()
{
	stack s;
	char str[10]="ABCDE";
	s.data=new char[100];
	for(int i=0;i<5;i++)
	{
		s.push(str[i]);
	}
	cout<<"Now the reversed string is"<<endl;
	while (!s.empty())
	{
		cout<<s.pop()<<" ";
	}
	delete [] s.data;
	return 0;
}
*/



// 3. USING THE CONCEPT OF INFORMATION HIDING 

class stack
{
	private:
	// data members top and pointer to the stack are now private 
	int top;
	char *data;
	public:
	
	// constructor
	stack()
	{
		top=-1;
		data=new char[100]; // Dynamic allocation of the memory of 100 characters
	}
	
	// destructor
	~stack()
	{
		cout<<"\nThis is the destructor which is called automatically when"
		    <<" the object is to go out of its scope"<<endl;
		delete [] data; // free the dynamic memory
	}
	void push(char x)
	{
		data[++top]=x;
	}
	bool empty()
	{
		return (top==-1);
	}
	char pop()
	{
		char c=data[top];
		--top;
		return c;
	}
};
int main()
{
	stack s;
	char str[10]="ABCDE";
	for(int i=0;i<5;i++)
	{
		s.push(str[i]);
	}
	cout<<"Now the reversed string is"<<endl;
	while (!s.empty())
	{
		cout<<s.pop()<<" ";
	}
	return 0;
} 

