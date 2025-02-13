Overview

This repository contains various examples and exercises related to C++ templates and file handling. The programs cover function templates, class templates, and basic file operations.

Examples and Exercises

Example 1.3: Function Template for Maximum Value

Implements a function template GetMax that returns the maximum of two values.

Demonstrates template instantiation with int and long types.

Example 1.4: Class Template for Finding Maximum Value

Implements a class template mypair that stores two values.

Includes a method getmax() to return the larger of the two values.

Demonstrates template instantiation with int.

Exercise 1.2: Class Template for Finding Minimum Value

Similar to Example 1.4 but provides a method getmin() to return the smaller value.

Demonstrates template instantiation with int.

Exercise 1.3: Template Class for Sequences

Implements a class template mysequence that stores an array of elements.

Provides methods for setting and getting array elements.

Includes methods getmin() and getmax() to find the smallest and largest elements.

Example 1.5: Class Template for Sequence Storage

Implements mysequence with methods to set and retrieve elements in a fixed-size array.

Demonstrates template instantiation with int and double.

Example 1.6: File Handling – Copying a File and Counting Characters

Reads characters from fin.txt and writes them to fout.txt.

Counts the number of characters copied.

Exercise 1.4: File Handling – Counting Words, Sentences, and Characters

Reads text from fin.txt and writes it to fout.txt.

Counts characters, words, and sentences.

Uses space detection for word counting and punctuation for sentence counting.

Requirements

C++ compiler (e.g., g++ or Visual Studio)

Basic knowledge of templates and file handling in C++

How to Compile and Run

Copy the desired C++ file to your working directory.

Compile using:

g++ filename.cpp -o output

Run the program:

./output

For file-handling exercises, ensure fin.txt exists in the working directory before execution.

Notes

Ensure proper error handling in file operations.

Modify array sizes and file names as needed.

Author

Created for learning and practicing C++ templates and file handling concepts.