#include <iostream>
#include <vector>

class Graph {
public:
    Graph(int n) : adjList(n), visited(n, false) {}

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Para grafos no dirigidos
    }
    void DFS(int v) {
        visited[v] = true;
        std::cout << v << " ";
        for (int u : adjList[v]) {
            if (!visited[u]) {
                DFS(u);
            }
        }
    }

    void DFSUtil(int v) {
        std::fill(visited.begin(), visited.end(), false);
        DFS(v);
    }

private:
    std::vector<std::vector<int>> adjList;
    std::vector<bool> visited;
};

int main() {
    int n = 5; // Número de nodos
    Graph g(n);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    std::cout << "Recorrido DFS a partir del nodo 0:" << std::endl;
    g.DFSUtil(0);

    return 0;
}
