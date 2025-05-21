This project showcases multiple implementations of queues in C++, inspired by the examples and exercises from Chapter 4 of a standard Data Structures course. It features static queues, dynamic template queues, and double-ended queues (deques), each illustrating different queue functionalities and concepts.

In Example 4.1, a basic static queue is created using arrays. It includes functions to insert elements, remove them, and check whether the queue is full or empty. Exercise 4.1 builds on this by using an array of queues to handle and process multiple sets of user inputs, highlighting the reusability of the queue class.

Example 4.2 introduces a template-based queue, which supports various data types using dynamic memory allocation. This version includes standard queue operations. Exercise 4.2 applies the template queue to manage a list of friends' names (strings), showing how templates enhance flexibility and reuse in queue implementations.

Exercise 4.3 focuses on creating a double-ended queue (deque) using a circular array. It supports inserting and deleting elements from both ends, with proper wrap-around logic handled using the modulo operator. This implementation adds advanced functionality beyond the basic queue.

Finally, Exercise 4.4 demonstrates how to use a character deque to check if a string is a palindrome. Characters are added from both ends and then compared by popping from the front and back. This practical example blends logic with queue operations and shows a real-world application of deques.

Overall, these examples provide a comprehensive understanding of queues in various contexts. They emphasize important concepts like index management, circular structures, and code generalization using templates.
