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


by using the compile.sh file we have in the codespace, simply type: bash compile.sh {folder / filename without filetype ex: .c }
Use this for running C programs.

___


# 2. Data Types

int, double, char, long double, float

strings are not native to C and thus are to be manipulated as char arrays.  

```LANGUAGE_HERE
*char myString[] =  "Hello!"


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
Ternary operators can be used in C for logic.

z = (a > b) ? a : b;    
is the same as     
z = max(a, b);





___





# 11. String Methods
There are numerous methods for strings like strtok() which turns a string into an array of tokens.  there are still basic methods for making every character in a string lower or uppercase, but the more C specific methods are best understood by referencing Tutorialspoint.com and The C Programming Language Book by Brian Kernighan and Dennis Ritchie.





___





# 12. Random Generation

???





___





# 13. Looping Structures
Loops in C have 2 flavors, for and while.  For each loops are not supported in C natively.  syntax for looping for every number 1-20 for example would look like 


```C
    

```





___





# 14. Functions/Methods

???





___





# 15. Elementary Data Structures

???





## 15.1 Arrays/Lists

???






## 15.2 Matrices

???





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
