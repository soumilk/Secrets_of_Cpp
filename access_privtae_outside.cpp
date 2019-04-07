#include<iostream>
using namespace std;
class base 
{
	public:
		virtual void sound()
		{
			cout<<" this is the sound function of the base class"<<endl;
		}
};
// this is the derived class which is inheriting the base class. 
class derived:public base 
{
	private:
		virtual void sound()
		{
			cout<<"This is the sound function of the class derived "<<endl;
		}
};
int main()
{
	base *b;
	derived d;
	b=&d;
	b->sound(); 		// this will give us the sound() function of derived class 
	cout<<"Back to the main"<<endl;
	return 0;
}
