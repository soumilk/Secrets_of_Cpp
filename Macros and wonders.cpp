/* the main() function in the C++ program is the core driver function and
 without this function the code will not proceed.
 Is there any way we can substitute the main function!!??
YEAH, there is:
 */
 // We all know the general working of marcos, this is the example which is unique and
 // is tried by very less number of people
 #include<iostream>
 using namespace std;
 # define soumil main

 int  soumil()
 {
   cout<<"This is the main function"<<endl;
   return 0;
 }

/* So now if anyone ask that can we call the main function without actually calling
the function with name main?!  then answer is yes!! */


/* 

LINK TO COMPLETE EXPLANATION OF MACROS IN CPP

https://guide.freecodecamp.org/cplusplus/preprocessors/

*/

