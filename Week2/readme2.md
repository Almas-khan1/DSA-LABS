Overview

This project contains various C++ implementations of Stack and Destack (Dynamic Stack) along with example programs demonstrating their usage. The stack operations include basic push and pop operations, infix to postfix conversion, postfix evaluation, and string reversal using a stack.

Implementations

Stack (Fixed-Size Array-Based Stack)

The Stack class is an array-based stack implementation with the following operations:

Push(ItemType newItem) - Adds an item to the top of the stack.

Pop(ItemType& item) - Removes and retrieves the top item from the stack.

IsEmpty() - Checks if the stack is empty.

IsFull() - Checks if the stack is full.

Destack (Dynamic Stack)

The destack<ItemType> class is a dynamically allocated stack implementation. It includes:

Push(ItemType newItem) - Adds an item to the stack.

Pop(ItemType& item) - Removes and retrieves the top item from the stack.

IsEmpty() - Checks if the stack is empty.

IsFull() - Checks if the stack is full.

Dynamic Memory Management - Supports dynamically allocated storage with constructors and destructors.

Example Programs

Example 1: Basic Stack Operations

A program demonstrating pushing and popping elements from a stack.

Example 2: Template-Based Stack

A template-based stack allowing storage of different data types like int and float.

Exercise 2.1: Reverse String Using Stack

A program that reverses a string using a stack.

Exercise 2.2: Infix to Postfix Conversion & Evaluation

This program includes:

Checking Parenthesis Validity - Ensures correct parenthesis placement in expressions.

Infix to Postfix Conversion - Converts infix expressions into postfix notation.

Postfix Evaluation - Evaluates a given postfix expression.

How to Run

Compile the code using a C++ compiler, for example:

g++ main.cpp stack.cpp destack.cpp -o program
./program

Follow on-screen instructions to interact with the stack operations.

Dependencies

C++ Standard Library (iostream, string, cstdlib)

Author

This project was created as part of a learning module on stack implementations in C++.
