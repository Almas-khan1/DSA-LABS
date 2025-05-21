This project implements a generic Binary Search Tree (BST) using C++ templates. It supports insertion, deletion, retrieval, traversal, and printing operations on tree nodes that store any comparable data type (ItemType).

-----------Features:
Generic Tree Node using C++ template class to store any data type.

Insertion of items maintaining BST property.

Deletion of nodes including all cases (leaf, one child, two children).

Retrieval to check if an item exists in the tree.

Check if the tree is full (every node has 0 or 2 children).

Counting nodes in the tree.

Inorder traversal to print tree contents in sorted order.

Automatic destruction of the tree and freeing memory when the tree object is destroyed.

File output: Print the sorted tree data into an output file.

--------Code Structure:
Class TreeType<ItemType>
TreeNode struct: Internal node representation with info, left, and right pointers.

---Private Member:

TreeNode<ItemType>* root: Root pointer to the tree.

---Public Methods:

TreeType(): Constructor initializes the root to nullptr.

~TreeType(): Destructor cleans up memory.

makenode(ItemType value): Creates and returns a new node.

IsEmpty(): Returns true if the tree is empty.

Isfull(): Checks if the tree is full (each node has 0 or 2 children).

Numberofnodes(): Counts total nodes.

InsertItem(ItemType item): Inserts an item into the tree.

DeleteItem(ItemType item): Deletes an item from the tree.

RetrieveItem(ItemType item, bool& found): Searches for an item.

PrintTree(ofstream& outFile): Prints tree contents in order to a file.

---Helper Functions (Private):
Recursive functions for insertion, deletion, retrieval, destruction, and printing.
