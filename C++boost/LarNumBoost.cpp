//C++ implementation code of finding the product of large numbers using Boost Lib.
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std; 
  
int128_t boost_product(long long A, long long B) 
{ 
    int128_t ans = (int128_t) A * B; 
    return ans; 
} 
  
int main() 
{ 
    long long first = 98745636214564698; 
    long long second=7459874565236544789; 
    cout << "Product of "<< first << " * "
         << second << " = \n"
         << boost_product(first,second) ; 
    return 0; 
} 
