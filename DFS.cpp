#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int V; // Number of vertices
    vector<vector<int> > adj; // Adjacency list

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    // Function to add edge
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        // For undirected graph, also add:
        // adj[v].push_back(u);
    }

    // DFS utility function
    void DFSUtil(int v, vector<bool> &visited) {
        visited[v] = true;
        cout << v << " ";

        for (int i = 0; i < adj[v].size(); i++) {
    int u = adj[v][i];
    if (!visited[u])
        DFSUtil(u, visited);
}

    }

    // DFS traversal
    void DFS(int start) {
        vector<bool> visited(V, false);
        cout << "DFS starting from node " << start << ":\n";
        DFSUtil(start, visited);
        cout << endl;
    }
};

int main() {
    Graph g(5); // Create a graph with 5 vertices (0 to 4)

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);

    g.DFS(0); // Start DFS from node 0

    return 0;
}

