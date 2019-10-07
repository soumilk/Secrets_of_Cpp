#include<iostream>

using namespace std;

namespace avinash_namespace {
        void print_name()
        {
                cout << "My name is Avinash" << endl;
        }

}

namespace blahblah_namespace {

        void print_name()
        {
                cout << "My name is blahblah" << endl;
        }
}

int main()
{
	avinash_namespace::print_name();
	blahblah_namespace::print_name();
	return 0;
}
