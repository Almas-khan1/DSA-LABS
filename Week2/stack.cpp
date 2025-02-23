//#include<iostream>
//#include<stdlib.h>
//#include "stack.h"
//using namespace std;
//
//Stack::Stack()
//{
//	top = -1;
//
//}
//int Stack::IsEmpty() const
//
//{
//	return (top == -1);
//
//}
//int Stack::IsFull() const
//{
//
//	return (top == MAX_ITEMS - 1);
//}
//void Stack::Push(ItemType newItem)
//{
//	if (IsFull())
//	{
//		cout << "Stack overflow" << endl;
//		exit(1);
//	}
//	top++;
//	items[top] = newItem;
//}
//void Stack::Pop(ItemType& Item)
//{
//
//	if (IsEmpty())
//	{
//		cout << "Stack underflow" << endl;
//		exit(1);
//	}
//
//	Item = items[top];
//	top--;
//
//}
