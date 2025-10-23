#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int V;
    vector<vector<int> > adj; 

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    // Function to add edge
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        
    }

   
    void DFSUtil(int v, vector<bool> &visited) {
        visited[v] = true;
        cout << v << " ";

        for (int i = 0; i < adj[v].size(); i++) {
    int u = adj[v][i];
    if (!visited[u])
        DFSUtil(u, visited);
}

    }

    
    void DFS(int start) {
        vector<bool> visited(V, false);
        cout << "DFS starting from node " << start << ":\n";
        DFSUtil(start, visited);
        cout << endl;
    }
};

int main() {
    Graph g(5); 

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.DFS(0); 

    return 0;
}

