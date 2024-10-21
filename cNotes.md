<h1>Handbook on Programming in C</h1>

**AP Computer Science Principles 2024-2025**

Owen White

<!-- This is a comment (which will not be displayed in the live file);
replace all "???" with your own text. -->
___
<h1>Table of Contents</h1>

- [1. Compiling and Running](#1-compiling-and-running)
- [2. Data Types](#2-data-types)
- [3. Console I/O](#3-console-io)
- [4. Arithmetic Operations](#4-arithmetic-operations)
- [5. Assignment Operations](#5-assignment-operations)
- [6. Comments](#6-comments)
- [7. Decision Structures](#7-decision-structures)
- [8. Conditional Operators](#8-conditional-operators)
- [9. Logic Operators](#9-logic-operators)
- [10. Advanced Decision Structures](#10-advanced-decision-structures)
- [11. String Methods](#11-string-methods)
- [12. Random Generation](#12-random-generation)
- [13. Looping Structures](#13-looping-structures)
- [14. Functions/Methods](#14-functionsmethods)
- [15. Elementary Data Structures](#15-elementary-data-structures)
  - [15.1 Arrays/Lists](#151-arrayslists)
  - [15.2 Matrices](#152-matrices)
- [References](#references)

<!-- 
- [16. Major Keywords](#16-major-keywords)
- [17. Error Handling](#17-error-handling)
- [18. Working with Files](#18-working-with-files)
- [19. Major Language Features](#19-major-language-features)
  - [19.1 Classes](#191-classes)
  - [19.2 Inheritance](#192-inheritance)
  - [19.3 Generic Typing (Templates)](#193-generic-typing-templates)
  - [19.4 Pointers](#194-pointers)
- [20. Importing Local Libraries](#20-importing-local-libraries)
- [21. Working with Time](#21-working-with-time)
- [22. Importing Libaries from Package managers](#22-importing-libaries-from-package-managers)
- [23. Bitwise Operators](#23-bitwise-operators)
- [24. Common Data Structures](#24-common-data-structures)
- [25. Advanced Language Features](#25-advanced-language-features)
-->




___





# 1. Compiling and Running

C programs are compiled before running unlike those in languages like Ruby and Python which are interpreted.  When attempting to run C code you may find that you can't because you don't have a compiler installed.  Different CPU's are structured differently which means that the compiled program needs to be different depending on the computer on which it is running.  This is something that is far more prominent when working in Assembly programming because parts of how you write Assembly are different depending on the processor you are writing it for.  C programs compile into assembly before making an executable file which means that the compilation process is different depending on the computer.  This is why C and C++ programs require you to install a dedicated compiler in order to run them where as anything that runs on the JVM or Java Virtual Machine do not.  The JVM compiles the code directly into machine code so that it doesn't matter what device you're using.  Hence the slogan, Write once, run anywhere.

___


# 2. Data Types

int, double, char, float

NOTE: there are more data types and specifiers like long, short, const, etc but they do not matter for understanding the basics of C. Pointers exist to manually manage memory and they are.

strings are not native to C and thus are to be manipulated as char arrays (more under the arrays/lists section.)  Variables are declared by type, name, and value as shown below.

```C
*char myString =  "Hello!"
// char myString[] = "Hello!"
int myInteger = 1;
double myDouble = 1.0; // more accurate than float
float myFloat = 1.0; // less memory intensive than double



```





___





# 3. Console I/O

By importing <stdio.h> with ( #include <stdio.h> ) you can get user input via scanf("");  To use scanf, you must also use format specifiers like %d for integers, %f for float, etc. 





___





# 4. Arithmetic Operations

+, -, *, /, %, can all be used in C. Things like ** cannot but you
can get exponents using pow() because the math library is built into C.



# 5. Assignment Operations

=, +=, -=. *=, /=, ++, can all be used to change the value or assign the value of something.  Obviously = can only be usd on initial assignment.





___





# 6. Comments
/* */ and double slash // both allow comments in C code

You can also use /** for documentation comments.






___





# 7. Decision Structures
 if, else, and else if allow conditions and logic.

As with many other languages, conditions are put in parentheses.()





___





# 8. Conditional Operators
==, <, >, >=, <= all work for conditions in C

if (x >= y)





___





# 9. Logic Operators

&& for and, || for or, and ! for not allow logic operations in C.

These are used for writing conditions just as they are in many other languages.





___





# 10. Advanced Decision Structures
Ternary operators can be used in C for logic.  While it may be difficult to read at first, it's just a simpler, while admittedly less verbose, way to write conditional logic.  Note that ternary operations can be used in virtually any programming language.

z = (a > b) ? a : b;    
is the same as

z = max(a, b);

variable = (condition) ?   if_True :   if_False


Additionally, you have switch cases for conditional logic to write it in a different way.  Writing the same code with normal logic, ternary logic, and with switch cases would look as follows: 

```C
  int main() {
    int x = 2;
    int mybool = 0;

    // regular
    if      (x == 1) {mybool = 1;}
    else if (x == 2) {mybool = 0;}
    
    // ternary
    mybool = (x == 2) ? 0 : 1;

    // switch case
    
  }
```






___





# 11. String Methods
There are numerous methods for strings like strtok() which turns a string into an array of tokens.  there are still basic methods for making every character in a string lower or uppercase, but the more C specific methods are best understood by referencing Tutorialspoint.com and The C Programming Language Book by Brian Kernighan and Dennis Ritchie.





___





# 12. Random Generation

???





___





# 13. Looping Structures
Loops in C have 2 flavors, for and while.  For each loops are not supported in C natively.  syntax for looping for every number 1-20 for example would look like this code below.


```C
    for (int lcv = 0; lcv <= 10; lcv++) {
      printf("Looping in C x10");
    }

    int lcv2 = 0;
    while (lcv <= 10) {
      printf("Looping in C x10");
      lcv++;
    }

```





___





# 14. Functions/Methods
Methods are declared by their return type followed by
their name, arguments in parenthesis for which types must also be specified, and curly braces for the content of them.
NOTE: while one line loops and if then statements can
avoid using the braces, this cannot be done for methods.

syntax for methods that calculate and return the output
of basic math expressions could look as follows:

```C
int sum(int num1, int num2) {
  return num1 + num2;
}
 // one line: int sum(int a, int b) {return a+b;}

int difference(int num1, int num2) {
  return num1 - num2;
}

int product(int num1, int num2) {
  return num1 * num2;
}

double quotient(int num1, int num2) {
  return num1 / num2;
}
```





___





# 15. Elementary Data Structures
The most basic data structures in programming that you can use in C are Arrays and Matrices.  Arrays, as covered in the next nextion





## 15.1 Arrays/Lists
Arrays in C for integers is specified simply as it is in other languages, with Type, Name, Value, as shown below.  for strings however it's not so easy.  Java for Example does not have Strings as a native type, rather they are a class object, but in C the syntax is much more expressive about what a string is under the hood.  Strings, just being an array of characters, are written as such.  There are two ways of writing this, as shown below but worth noting is that the pointer based syntax is preferable for instances where you will be controlling the allocated memory more.  The basic "array-like" syntax is easier for some people to understand, but it has less low level functionality.

The length of an array is static, simply meaning it cannot be changed after declaration, but ***lists*** or arrays with dynamic size can be implemented if you build it from scratch; given the skill/knowledge floor to do this, it is not generally recommended.

NOTE: if you want to explicitly declare the length of an array, you do so in the brackets, though this is not technically required.

```C
int myNums[] = {0, 1, 2, 3}; // defined indices.
int myNums2[];              // undefined indices.

char  myString[] = "This is my String";
*char myString2 = "This is my String in the pointer based syntax";


char myStringArray[][] = {"string_Array0", "string_Array1"};
char **myStringArray2 = {"string_Array0", "string_Array1"};

```






## 15.2 Matrices

Matrices, or multidimensional arrays are defined with the typical array syntax but with multiple sets of brackets.  As with typical arrays you can specify the length of the array on definition but are not strictly required to.

Additionally you do not the square brackets if you specify the length.  See myMatrix3 in the code below.
```C
int myMatrix[][] = {
  [0, 1],
  [0, 1],
  [0, 1]
};

int myMatrix2[3][2] = {
  [0, 1],
  [0, 1],
  [0, 1]
};

int myMatrix3[3][3] = {
  1,2,3, 1,2,3, 1,2,3
}
// one line below.
// int myMatrix3[3][3] = {1,2,3, 1,2,3, 1,2,3}

```




___





<!-- 
EVERYTHING BELOW IS OPTIONAL; 
UNCOMMENT BY REMOVING THE ARROW TAGS SURROUNDING
(i.e., delete the "< !--" and "-- >" tags)

CHANGE THE SECTION NUMBERS AS DESIRED
-->

<!-- # 16. Major Keywords

???





___ -->





<!-- # 17. Error Handling

???





___ -->





<!-- # 18. Working with Files

???





___ -->





<!-- # 19. Major Language Features

???







## 19.1 Classes

???





## 19.2 Inheritance

???





## 19.3 Generic Typing (Templates)

???





## 19.4 Pointers

???





___ -->





<!-- # 20. Importing Local Libraries

???





___ -->





<!-- # 21. Working with Time

???





___ -->





<!-- # 22. Importing Libaries from Package managers

???





___ -->





<!-- # 23. Bitwise Operators

???





___ -->





<!-- # 24. Common Data Structures

???





___ -->





<!-- # 25. Advanced Language Features

???





___ -->





# References

* [Markdown Cheatsheet](https://gist.github.com/jonschlinkert/5854601)
* [description](http://example.com)
