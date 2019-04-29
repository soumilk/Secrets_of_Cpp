
// this code is really tricky ... it confuses the compiler ...

#include <iostream>
#include <string.h>
using namespace std;
class learn
{
	char *s ;
public :
	learn (const char *str);
	~learn ()
	{
		cout <<" this is the destructor "<<endl;
				delete []s ;
	}
	void print( )
	{
		cout <<s <<endl;
	}
	void change (const char *str);

};
learn :: learn (const char *str)
	{
		s = new char [ strlen(str) +1];
		strcpy (s, str );
	}
void learn :: change ( const char *str)
	{
		delete []s;
		s= new char [strlen(str) +1];
		strcpy (s, str );
	}
int main()
{
	learn obj1 ( "jaipur " );
	learn obj2= obj1 ;
	obj1.print();
	obj2.print();
	obj2.change("jaipur rajasthan");
	obj1.print();
	obj2.print();
	return 0;
}
