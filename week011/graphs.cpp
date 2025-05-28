//10.1 
// adjacency matrix
//#include <iostream>
// #include <climits> // For INT_MAX
// using namespace std;

// const int MAX = 10;

// class GraphMatrix {
//     int adj[MAX][MAX];
//     int numVertices;

// public:
//     GraphMatrix(int vertices) {
//         numVertices = vertices;
//         for (int i = 0; i < MAX; i++)
//             for (int j = 0; j < MAX; j++)
//                 adj[i][j] = INT_MAX; // no edge
//     }

//     void addEdge(int u, int v, int wt) {
//         adj[u][v] = wt;
//         // For undirected graph: adj[v][u] = wt;
//     }

//     void print() {
//         cout << "Adjacency Matrix:\n";
//         for (int i = 0; i < numVertices; i++) {
//             for (int j = 0; j < numVertices; j++) {
//                 if (adj[i][j] == INT_MAX)
//                     cout << "∞ ";
//                 else
//                     cout << adj[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     GraphMatrix gm(4);
//     gm.addEdge(0, 1, 10);
//     gm.addEdge(0, 2, 20);
//     gm.addEdge(1, 3, 30);
//     gm.print();
// }

//adjacency list
// #include <iostream>
// using namespace std;

// const int MAX = 10;

// struct Node {
//     int dest;
//     int weight;
//     Node* next;
// };

// class GraphList {
//     Node* head[MAX];
//     int numVertices;

// public:
//     GraphList(int vertices) {
//         numVertices = vertices;
//         for (int i = 0; i < MAX; i++)
//             head[i] = NULL;
//     }

//     void addEdge(int u, int v, int wt) {
//         if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
//             Node* newNode = new Node;
//             newNode->dest = v;
//             newNode->weight = wt;
//             newNode->next = head[u];
//             head[u] = newNode;
//         }
//         else {
//             cout << "Invalid vertex index: " << u << " or " << v << endl;
//         }
//     }

//     void print() {
//         cout << "Adjacency List:\n";
//         for (int i = 0; i < numVertices; i++) {
//             cout << "Vertex " << i << ":";
//             Node* temp = head[i];
//             while (temp != NULL) {
//                 cout << " -> " << temp->dest << "(wt=" << temp->weight << ")";
//                 temp = temp->next;
//             }
//             cout << endl;
//         }
//     }

   
//     ~GraphList() {
//         for (int i = 0; i < numVertices; i++) {
//             Node* curr = head[i];
//             while (curr != NULL) {
//                 Node* temp = curr;
//                 curr = curr->next;
//                 delete temp;
//             }
//         }
//     }
// };



// int main() {
//   /*  GraphMatrix gm(4);
//     gm.addEdge(0, 1, 10);
//     gm.addEdge(0, 2, 20);
//     gm.addEdge(1, 3, 30);
//     gm.print();

//     cout << endl;*/

//     GraphList gl(4);y
//     gl.addEdge(0, 1, 10);
//     gl.addEdge(0, 2, 20);
//     gl.addEdge(1, 3, 30);
//     gl.print();

//     return 0;
// }
