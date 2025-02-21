#include "destack.h"
//using namespace std;
//template< class ItemType>
//destack<ItemType>::destack() {
//	maxdestack = 500;
//	top = -1;
//	items = new ItemType[500];
//}
//template< class ItemType>
//destack<ItemType>::destack(int max) {
//	maxdestack = max;
//	top = -1;
//	items = new ItemType[max];
//}
//template< class ItemType>
//destack<ItemType>::~destack() {
//	delete[]items;
//}
//template< class ItemType>
//int destack<ItemType>::IsEmpty()const {
//	return(top == -1);
//}
//template< class ItemType>
//int destack<ItemType>::IsFull() const {
//	return(top == maxdestack - 1);
//}
//template< class ItemType>
//void destack<ItemType>::Push(ItemType newItem) {
//	if (IsFull()) {
//		cout << "destack overflow" << endl;
//		exit(1);
//	}
//	top++;
//	items[top] = newItem;
//}
//template<class ItemType>
//void destack<ItemType>::Pop(ItemType& item) {
//	if (IsEmpty()) {
//		cout << "destack underflow" << endl;
//		exit(1);
//	}
//	item = items[top];
//	top--;
//}
