## C++ STL (Standard Template Library) 
This folder contains all the STL features and inbuilt functions required to solve the problems in any competition in competitive programming.

<img src="https://erarpitsharma.com/wp-content/uploads/2018/11/cpppp-490x490.png" alt="drawing" width="500"/>

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized. A working knowledge of template classes is a prerequisite for working with STL.

### Sorting :
* There is an inbuilt sort function in C++ STL library, this sort function is really quick and it 
uses the randomised quick sort function in background working.
* It really useful and is acceptable in every competitive competition. You can provide your custom comparator function if you need to sort the elements upon different parameters.
* We can sort only the part of array if it is required. This sort function works on almost every defined data type.

<strong> Look at this code for better understanding. </strong>

[Code of std::sort() in this file](https://github.com/soumilk/Secrets_of_Cpp/blob/master/C%2B%2B%20STL/01.%20std::sort().cpp)

* The application of std::sort() having custom comparator function on strings. View the source code in 
[sort() with strings](https://github.com/soumilk/Secrets_of_Cpp/blob/master/C%2B%2B%20STL/012.sort()%20in%20strings.cpp)

For more understading visit these resource:

https://www.geeksforgeeks.org/sort-c-stl/<br>
http://www.cplusplus.com/reference/algorithm/sort/

### Binary search :

* Binary search is a divide and conquer approach, most of us know about the binary search. If you want to see the implementation of the binary search, then [visit the code here](https://github.com/soumilk/Algorithms_and_Their_Techniques/blob/master/Divide%20and%20Conquer/Binary%20search.cpp) to see both the approach to implement binary search i.e. via looping and recurssion.
* There is inbuilt binary search algorithm in STL, we can use it for faster execution, visit [this code](https://github.com/soumilk/Secrets_of_Cpp/blob/master/C%2B%2B%20STL/02.std::binary_search().cpp) to see the implementation of the binary_search algorithm.
* Consider a situation when there is no array given and we need to implement the binary search !!. Lets say I want to calculate the square root of 319 using the binary search so now how to implement the binary search !!!
* <strong> Binary search is applicable on each and every function which is monotonic, i.e. continously increasing or decreasing </strong>.
* Consider the function of square root, polynomials and all the monotonic functions, we can apply the binary search on them.
* Must view [the code here](https://github.com/soumilk/Secrets_of_Cpp/blob/master/C%2B%2B%20STL/021.Sqaure%20Root%20using%20Binary%20search.cpp) to see the calculation of square root using binary search algorithm.
  
### Stack :

* Stack is a data structure which follows the LIFO approach, i.e. <strong>Last In First Out</strong>, stack is a very useful data structure and is used widely in problem solving and competitive. 
* You can learn all about Stacks from [here](https://www.tutorialspoint.com/data_structures_algorithms/stack_algorithm.htm).
* To see the stack implementation with all the functionality of push, pop and empty functions, you should [vist this code](https://github.com/soumilk/Secrets_of_Cpp/blob/master/C%2B%2B%20STL/03.Stack%20implementations.cpp).
* Stack is already a built-in DS in C++ stl, see [this code](https://github.com/soumilk/Secrets_of_Cpp/blob/master/C%2B%2B%20STL/031.std::stack().cpp) to understand its working.

  
