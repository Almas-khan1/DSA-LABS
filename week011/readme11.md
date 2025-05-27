This project demonstrates two common ways to represent graphs in C++: the Adjacency Matrix and the Adjacency List.

1. Adjacency Matrix Representation
In this method, a graph is stored using a two-dimensional array (matrix). The rows and columns represent the vertices, and the value at the intersection shows the weight of the edge between those vertices.

If there is no edge between two vertices, a special value (like infinity) is used to indicate no connection.

It is simple to implement and easy to check if an edge exists between any two vertices.

However, this approach uses more memory, especially for graphs with many vertices but few edges (sparse graphs).

It works well for small graphs or dense graphs where many edges exist.

2. Adjacency List Representation
This approach uses an array of linked lists. Each vertex has a list that contains its adjacent vertices along with the weight of the connecting edge.

It is memory efficient for sparse graphs because it stores only existing edges.

Adding and removing edges is easier and faster compared to matrices.

Traversing the edges of a vertex is efficient since only connected vertices are stored.

It requires dynamic memory allocation and managing pointers, making it slightly more complex than the matrix method.

Key Differences
Memory Usage: Matrices require memory proportional to the square of the number of vertices, while lists require memory proportional to the number of edges.

Edge Lookup: Matrices provide constant time edge lookup; lists require searching through the linked list.

Suitability: Matrices are better for dense graphs; lists are better for sparse graphs.

Purpose of This Project
The purpose is to help learners understand and compare these two fundamental graph representations. It also illustrates basic graph operations such as adding edges and displaying the graph structure in both formats
