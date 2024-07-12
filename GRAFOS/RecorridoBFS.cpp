#include <iostream>
#include <vector>
#include <queue>

class Graph {
public:
    Graph(int n) : adjList(n), visited(n, false) {}

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Para grafos no dirigidos
    }

    void BFS(int s) {
        std::queue<int> q;
        visited[s] = true;
        q.push(s);

        while (!q.empty()) {
            int v = q.front();
            q.pop();
            std::cout << v << " ";

            for (int u : adjList[v]) {
                if (!visited[u]) {
                    visited[u] = true;
                    q.push(u);
                }
            }
        }
    }

    void BFSUtil(int s) {
        std::fill(visited.begin(), visited.end(), false);
        BFS(s);
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

    std::cout << "Recorrido BFS a partir del nodo 0:" << std::endl;
    g.BFSUtil(0);

    return 0;
}
