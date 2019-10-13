//Program to show the effectiveness of the boost library
//in calculating large numbers, like a large factorial

#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>                
using boost::multiprecision::cpp_int;                             //Using the boost library
using namespace std;

cpp_int factorial(cpp_int n)                                      //cpp_int is a very huge data type
{                                    
    cpp_int fact=1;
    for(int i = 2; i <= n; i++){
        fact= fact * i;                                           //cpp-int can directly store the fatorial   
    }                                                             //without overflowing even for large numbers
    return fact;
}                                                             

int main() {
cpp_int num;

cin>>num;
cout<<fact(num)<<"\n";                                             //prints factorial of the number

return 0;
}
