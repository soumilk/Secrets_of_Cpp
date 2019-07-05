// CPP program to demonstrate working of STL stack 

#include <iostream> 
#include <stack> 
using namespace std; 

void showstack(stack <int> s) 
{ 
	while (!s.empty())  // s.empty() returns the bool value, true when the stack 
	                    // is empty and false otherwise
	{ 
		cout << '\t' << s.top(); 
		s.pop(); 
	} 
	cout << '\n'; 
} 

int main () 
{ 
	stack <int> s;      // In built stack DS in C++ STL
	s.push(10);         // Push the element in the stack
	s.push(30); 
	s.push(20); 
	s.push(5); 
	s.push(1); 

	cout << "The stack is : "; 
	showstack(s); 
    //cout<<s[1]<<endl;
    /*
	This statement will produce the error, becasue only the top element is 
	accessable in the stack and it will follow the LIFO fashion. 
	*/
    
	cout << "\ns.size() : " << s.size(); 
	cout << "\ns.top() : " << s.top();  // s.top() returs the top most element


	cout << "\ns.pop() : "; 
	s.pop(); 
	showstack(s); 

	return 0; 
} 
