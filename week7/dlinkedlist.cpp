//----------example 7.1-----------//
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int val) {
//         data = val;
//         prev = NULL;
//         next = NULL;
//     }
// };

// class DoubleLinkedList {
// private:
//     Node* head;
//     Node* tail;

// public:
//     DoubleLinkedList() {
//         head = NULL;
//         tail = NULL;
//     }

//     void pushBack(int value) {
//         Node* newNode = new Node(value);
//         newNode->prev = tail;
//         if (tail != NULL)
//             tail->next = newNode;
//         tail = newNode;
//         if (head == NULL)
//             head = newNode;
//     }

//     void pushFront(int value) {
//         Node* newNode = new Node(value);
//         newNode->next = head;
//         if (head != NULL)
//             head->prev = newNode;
//         head = newNode;
//         if (tail == NULL)
//             tail = newNode;
//     }

//     int popBack() {
//         if (tail == NULL) {
//             cout << "List is empty!" << endl;
//             return -1;
//         }
//         int val = tail->data;
//         Node* temp = tail;
//         tail = tail->prev;
//         if (tail != NULL)
//             tail->next = NULL;
//         else
//             head = NULL;
//         delete temp;
//         return val;
//     }

//     int popFront() {
//         if (head == NULL) {
//             cout << "List is empty!" << endl;
//             return -1;
//         }
//         int val = head->data;
//         Node* temp = head;
//         head = head->next;
//         if (head != NULL)
//             head->prev = NULL;
//         else
//             tail = NULL;
//         delete temp;
//         return val;
//     }

//     bool isEmpty() {
//         return head == NULL;
//     }
// };

// int main() {
//     int arr[] = { 4, 6, 8, 32, 19 };
//     DoubleLinkedList dlist;

//     for (int i = 0; i < 5; i++) {
//         dlist.pushBack(arr[i]);
//     }

//     dlist.pushBack(11);
//     dlist.pushFront(100);

//     cout << "Popping from back: ";
//     while (!dlist.isEmpty()) {
//         cout << dlist.popBack() << " ";
//     }
//     cout << endl;

//     return 0;
// }

//------------exercise 7.1-----------//
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     long long data;
//     Node* prev;
//     Node* next;

//     Node(long long val) {
//         data = val;
//         prev = NULL;
//         next = NULL;
//     }
// };

// class DoubleLinkedList {
// private:
//     Node* head;
//     Node* tail;

// public:
//     DoubleLinkedList() {
//         head = NULL;
//         tail = NULL;
//     }

//     void pushBack(long long value) {
//         Node* newNode = new Node(value);
//         newNode->prev = tail;
//         if (tail != NULL)
//             tail->next = newNode;
//         tail = newNode;
//         if (head == NULL)
//             head = newNode;
//     }

//     void pushFront(long long value) {
//         Node* newNode = new Node(value);
//         newNode->next = head;
//         if (head != NULL)
//             head->prev = newNode;
//         head = newNode;
//         if (tail == NULL)
//             tail = newNode;
//     }

//     long long popFront() {
//         if (head == NULL) {
//             cout << "List is empty!" << endl;
//             return -1;
//         }
//         long long val = head->data;
//         Node* temp = head;
//         head = head->next;
//         if (head != NULL)
//             head->prev = NULL;
//         else
//             tail = NULL;
//         delete temp;
//         return val;
//     }

//     bool isEmpty() {
//         return head == NULL;
//     }
// };

// int main() {
//     long long arr[] = { 1000000000001, 2000000000002, 3000000000003, 4000000000004 };
//     DoubleLinkedList dlist;

//     for (int i = 0; i < 4; i++) {
//         dlist.pushBack(arr[i]);
//     }

//     dlist.pushBack(5000000000005);
//     dlist.pushFront(9999999999999);

//     cout << "List after insertions: ";
//     while (!dlist.isEmpty()) {
//         cout << dlist.popFront() << " ";
//     }
//     cout << endl;

//     return 0;
// }

