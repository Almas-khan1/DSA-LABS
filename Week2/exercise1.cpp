<<<<<<< HEAD
  //EXAMPLE 2.1 
//
//#include<iostream>
//#include "Stack.h"
//#include<string>
//using namespace std;
//
//int main() {
//    Stack s;
//    int item;
//
//    for (int i = 0; i < 20; i++)
//        s.Push(i);
//
//    for (int i = 0; i < 20; i++) {
//        s.Pop(item);
//        cout << item << endl;
//    }
//
//    return 0;
//}
//
//
// EXCERCISE 2.1 
//   
//
//#include <iostream>
//#include "Stack.h"
//#include <string>
//using namespace std;
//
//string ReverseString(const string& str) {
//    Stack stack;
//    string reversed = "";
//
//    for (char ch : str) {
//        stack.Push(ch);
//    }
//
//    while (!stack.IsEmpty()) {
//        char ch;
//        stack.Pop(ch);
//        reversed += ch;
//    }
//
//    return reversed;
//}
//
//int main() {
//    Stack s;
//    char item;
//
//    // Push values into stack
//    for (int i = 0; i < 20; i++) {
//        s.Push(i);
//    }
//
//    // Peek the top element
//    cout << "The element at the top: " << s.Peek() << endl;
//
//    // Pop and print all elements
//    for (int i = 0; i < 20; i++) {
//        s.Pop(item);
//        cout << item << endl;
//    }
//
//    // String reversal using stack
//    string input;
//    cout << "Enter a string: ";
//    getline(cin, input);
//
//    string reversed = ReverseString(input);
//    cout << "Reversed string: " << reversed << endl;
//
//    return 0;
//}
=======
  //EXAMPLE 2.1 
//
//#include<iostream>
//#include "Stack.h"
//#include<string>
//using namespace std;
//
//int main() {
//    Stack s;
//    int item;
//
//    for (int i = 0; i < 20; i++)
//        s.Push(i);
//
//    for (int i = 0; i < 20; i++) {
//        s.Pop(item);
//        cout << item << endl;
//    }
//
//    return 0;
//}
//
//
// EXCERCISE 2.1 
//   
//
//#include <iostream>
//#include "Stack.h"
//#include <string>
//using namespace std;
//
//string ReverseString(const string& str) {
//    Stack stack;
//    string reversed = "";
//
//    for (char ch : str) {
//        stack.Push(ch);
//    }
//
//    while (!stack.IsEmpty()) {
//        char ch;
//        stack.Pop(ch);
//        reversed += ch;
//    }
//
//    return reversed;
//}
//
//int main() {
//    Stack s;
//    char item;
//
//    // Push values into stack
//    for (int i = 0; i < 20; i++) {
//        s.Push(i);
//    }
//
//    // Peek the top element
//    cout << "The element at the top: " << s.Peek() << endl;
//
//    // Pop and print all elements
//    for (int i = 0; i < 20; i++) {
//        s.Pop(item);
//        cout << item << endl;
//    }
//
//    // String reversal using stack
//    string input;
//    cout << "Enter a string: ";
//    getline(cin, input);
//
//    string reversed = ReverseString(input);
//    cout << "Reversed string: " << reversed << endl;
//
//    return 0;
//}
>>>>>>> c43e66a6f8607df26743b7e18d4fa5889eeb5ab7
