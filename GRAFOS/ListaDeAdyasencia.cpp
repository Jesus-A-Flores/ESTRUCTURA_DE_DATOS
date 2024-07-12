#include <iostream>
#include <vector>
using namespace std;
// Clase para representar un grafo usando lista de adyacencia
class Graph {
public:
    // Constructor para inicializar el grafo con n nodos
    Graph(int n) : adjList(n) {}

    // Método para añadir una arista al grafo
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Para grafos no dirigidos, agregar también esta línea
    }

    // Método para imprimir el grafo
    void printGraph() {
        for (int i = 0; i < adjList.size(); ++i) {
            cout << "Nodo " << i << ": ";
            for (int j : adjList[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

private:
    vector<vector<int>> adjList;
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

    g.printGraph();

    return 0;
}
