# Exploring C++

C++ is undoubtefully a language which implements among the most powerful features of programming paradigm in the world.
Here in this repo we have explored the various aspects of C++, its applications and behaviour. 

## Macros and wonders
Preprocessors are programs that process our source code before compilation.
Preprocessor programs provide preprocessors directives which tell the compiler to preprocess the source code before compiling. All of these preprocessor directives begin with a ‘#’ (hash) symbol. This (‘#’) symbol at the beginning of a statement in a C/C++ program indicates that it is a pre-processor directive. We can place these preprocessor directives anywhere in our program. Examples of some preprocessor directives are: #include, #define, #ifndef etc.
  * Macros: Macros are a piece of code in a program which is given some name. Whenever this name is encountered by the compiler the compiler replaces the name with the actual piece of code. The ‘#define’ directive is used to define a macro.

## Ambiguity in Multipath Inheritance
  Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.
The constructors of inherited classes are called in the same order in which they are inherited.
### The diamond problem
The diamond problem occurs when two superclasses of a class have a common base class.
Multiple derived classes inherits the features of base class. Hence when we derive a new class by inheriting features from the two classes derived from the same base class, then same features from the first base is inherited to the finally derived class from two paths. This cause ambiguity in accessing first base class members. 
## Solution to Ambiguity in Multiple Inheritance
The solution of the problem of ambiguity in multipath inheritance are 
1. Use of virtual function
2. Use of scope resolution operator

### Use of Virtual Function
A virtual function a member function which is declared within a base class and is re-defined(Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.

  * Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
  * They are mainly used to achieve Runtime polymorphism.
  * Functions are declared with a virtual keyword in base class.
  * The resolving of function call is done at Run-time.
### Use of scope resolution operator
In C++, scope resolution operator is :: . It is used for following purposes:
  * To access a global variable when there is a local variable with same name.
  * To define a function outside a class.
  * To access a class’s static variables.
  * In case of multiple Inheritance.
  * For namespace.  
  * Refer to a class inside another class.    

  Using scope resolution operator we can manually specify the path from which data member a will be accessed and hence solving the ambiguity.

## Access Private Member Function outside the class
The idea of Encapsulation is to bundle data and methods (that work on the data) together and restrict access of private data members outside the class. In C++, a friend function or friend class can also access private data members.

Is it possible to access private members outside a class without friend?
Yes, it is possible using pointers.

## sizeof Operator
Sizeof is a much used operator in the C programming language. It is a compile time unary operator which can be used to compute the size of its operand. The result of sizeof is of unsigned integral type which is usually denoted by size_t. sizeof can be applied to any data-type, including primitive types such as integer and floating-point types, pointer types, or compound datatypes such as Structure, union etc.

### Usage
sizeof() operator is used in different way according to the operand type.

## Understanding Pointers
Pointers are symbolic representation of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. It’s general declaration in C/C++ has the format :

### Syntax:  
datatype * var_name;   
int *ptr;   // ptr can point to an address which holds int data

### How to use a pointer?

  * Define a pointer variable.
  * Assigning the address of a variable to a pointer using unary operator (&) which returns the address of that variable.
  * Accessing the value stored in the address using unary operator (*) which returns the value of the variable located at the address specified by its operand.

### Use of Smart Pointers
  * Smart pointer are a kind of pointers whose destruction happens impliceitely.
  * Usually these are the wrappers over the pointer variable/object.
  * [Smart Pointers](https://www.learncpp.com/cpp-tutorial/15-1-intro-to-smart-pointers-move-semantics/)

### References 
  * [GeeksForGeeks](https://geeksforgeeks.org)
  * [StackOverflow](stackoverflow.com)

