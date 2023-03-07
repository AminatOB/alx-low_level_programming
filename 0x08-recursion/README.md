# 0x08. C - Recursion

# Resources

 Read or watch:
	* 0x08. Recursion, introduction
	* What on Earth is Recursion?
	* C - Recursion
	* C Programming Tutorial 85, Recursion pt.1
	* C Programming Tutorial 86, Recursion pt.2

# Learning Objectives

 At the end of the project, student is expected to be able to explain to anyone, without the help of Google:
	* What is recursion
	* How to implement recursion
	* In what situations you should implement recursion
	* In what situations you shouldn’t implement recursion

# Requirements

 General
	* Allowed editors: vi, vim, emacs
	* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	* All your files should end with a new line
	* A README.md file, at the root of the folder of the project is mandatory
	* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
	* You are not allowed to use global variables
	* No more than 5 functions per file
	* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
	* You are allowed to use _putchar
	* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
	* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
	* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
	* Don’t forget to push your header file
	* You are not allowed to use any kind of loops
	* You are not allowed to use static variables

# Tasks

0. Write a function that prints a string, followed by a new line.

	* Prototype: `void _puts_recursion(char *s)`;
	* FYI: The standard library provides a similar function: puts. Run man puts to learn more.

1. Write a function that prints a string in reverse.

	* Prototype: `void _print_rev_recursion(char *s)`;

2. Write a function that returns the length of a string.

	* Prototype: `int _strlen_recursion(char *s)`;
	* FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

3. Write a function that returns the factorial of a given number.

	* Prototype: `int factorial(int n)`;
	* If n is lower than 0, the function should return -1 to indicate an error
	* Factorial of 0 is 1

4. Write a function that returns the value of x raised to the power of y.

	* Prototype: `int _pow_recursion(int x, int y)`;
	* If y is lower than 0, the function should return -1
	* FYI: The standard library provides a different function: pow. Run man pow to learn more.

5. Write a function that returns the natural square root of a number.

	* Prototype: `int _sqrt_recursion(int n)`;
	* If n does not have a natural square root, the function should return -1
	* FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.

6. Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

	* Prototype: `int is_prime_number(int n)`;

7. Write a function that returns 1 if a string is a palindrome and 0 if not.

	* Prototype: `int is_palindrome(char *s)`;
	* An empty string is a palindrome

8. Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

	* Prototype: `int wildcmp(char *s1, char *s2)`;
	* s2 can contain the special character *.
	* The special char * can replace any string (including an empty string)

# Author:
Julien Barbier

# Task Completed by:
Bakare Aminat Oluwatoyosi
