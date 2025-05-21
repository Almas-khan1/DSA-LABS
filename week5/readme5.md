Data Structures and Algorithms Lab(DSA - LAB)
Overview
This project demonstrates the implementation of Priority Queues through two exercises.These exercises highlight how to manage elements based on their priorities and remove them in a priority order.The first exercise uses a static priority queue, while the second implements a dynamic priority queue.

Exercises
Exercise 5.1: Static Priority Queue
This exercise focuses on implementing a priority queue with a fixed number of levels(10).In this approach, the user is asked to enter elements and their corresponding priority levels(ranging from 0 to 9).The program stores the elements and removes them based on their priority, starting from the highest priority.

Key Features :

10 priority levels(0 - 9) for insertion.

Elements are removed from the queue starting with the highest priority.

Fixed - size priority queue.

Exercise 5.2: Dynamic Priority Queue
This exercise expands on the static priority queue by allowing the user to specify the number of priority levels.The program prompts the user to enter elements and their priorities, then removes them according to their priority levels.This version uses a dynamic array to accommodate different levels of priorities.

Key Features :

User - defined number of priority levels.

Dynamic priority queue implementation using arrays.

Elements are removed starting from the highest priority.

Classes and Methods
pque Class
The pque class is used to represent the priority queue.It supports both static and dynamic priority queues.

Constructor : Initializes the priority queue with a given number of levels.

isempty : Checks if all queues are empty.

insert : Inserts an item with a specified priority into the queue.

remove : Removes an item from the queue based on the highest priority.

queue Class
The queue class represents a standard queue used within the priority queue.

Constructor : Initializes a queue with a specified maximum size.

isempty : Checks if the queue is empty.

isfull : Checks if the queue is full.

insert : Inserts an item into the queue.

remove : Removes an item from the queue.

Compilation and Execution
Ensure all necessary files are in the same directory(e.g., pque.cpp, queue.cpp, pque.h, queue.h).

Compile the code using a C++ compiler(e.g., g++ or clang).

Run the executable and follow the prompts to insert elements and their priorities.

Sample Output
For Exercise 5.1 (Static Priority Queue) :

    User will enter elements and their priorities(0 - 9).

    The program will then display the elements in the order of removal, starting from the highest priority.

    For Exercise 5.2 (Dynamic Priority Queue) :

    User will enter the number of priority levels and then elements with corresponding priorities.

    The program will remove elements based on their priorities.
