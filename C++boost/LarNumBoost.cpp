//C++ implementation code of finding the product of large numbers using Boost Lib.
//The Boost.Multiprecision library can be used for computations requiring precision exceeding that of standard built-in types such as float, double and long double.
//For extended-precision calculations, Boost.Multiprecision supplies a template data type called cpp_dec_float.

#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; //here we are using boost as namespace that includes boost libarary
using namespace std; 
 
//the below line is the function where the product of two numbers will take place. 
int128_t boost_product(long long A, long long B) 
{ 
    int128_t ans = (int128_t) A * B; 
    return ans; 
} 
  
//in main function we tooked two long data type numbers and then called our boost_product() function.
int main() 
{ 
    long long first = 98745636214564698; 
    long long second=7459874565236544789; 
    cout << "Product of "<< first << " * "
         << second << " = \n"
         << boost_product(first,second) ; 
    return 0; 
} 
