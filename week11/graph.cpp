//adjacency matrix 

// #include <iostream>
// #include <vector>
// using namespace std;

// class WeightedGraphMatrix {
//     int V; // Number of vertices
//     vector<vector<int>> adjMatrix; // 2D vector for adjacency matrix

// public:
//     // Constructor
//     WeightedGraphMatrix(int vertices) {
//         V = vertices;
//         adjMatrix.resize(V, vector<int>(V, 0)); // Initialize with 0 (no edges)
//     }

//     // Add edge (u->v) with weight w
//     void addEdge(int u, int v, int w) {
//         adjMatrix[u][v] = w;
//         adjMatrix[v][u] = w; // For undirected graph; remove this line if directed
//     }

//     // Print adjacency matrix
//     void printGraph() {
//         cout << "Adjacency Matrix:\n";
//         for (int i = 0; i < V; i++) {
//             for (int j = 0; j < V; j++) {
//                 cout << adjMatrix[i][j] << " ";
//             }
//             cout << "\n";
//         }
//     }
// };

// int main() {
//     WeightedGraphMatrix g(4);

//     g.addEdge(0, 1, 10);
//     g.addEdge(0, 2, 5);
//     g.addEdge(1, 2, 2);
//     g.addEdge(2, 3, 1);

//     g.printGraph();

//     return 0;
// }

// adjacency list
// #include <iostream>
// #include <vector>
// using namespace std;

// class WeightedGraphList {
//     int V;
//     vector<vector<pair<int, int>>> adjList; // pair<neighbor, weight>

// public:
//     WeightedGraphList(int vertices) {
//         V = vertices;
//         adjList.resize(V);
//     }

//     // Add edge (u->v) with weight w
//     void addEdge(int u, int v, int w) {
//         adjList[u].push_back({v, w});
//         adjList[v].push_back({u, w}); // For undirected graph; remove if directed
//     }

//     // Print adjacency list
//     void printGraph() {
//         cout << "Adjacency List:\n";
//         for (int i = 0; i < V; i++) {
//             cout << i << " -> ";
//             for (auto &edge : adjList[i]) {
//                 cout << "(" << edge.first << ", " << edge.second << ") ";
//             }
//             cout << "\n";
//         }
//     }
// };

// int main() {
//     WeightedGraphList g(4);

//     g.addEdge(0, 1, 10);
//     g.addEdge(0, 2, 5);
//     g.addEdge(1, 2, 2);
//     g.addEdge(2, 3, 1);

//     g.printGraph();

//     return 0;
// }

