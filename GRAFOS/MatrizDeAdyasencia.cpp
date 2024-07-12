#include <iostream>
#include <vector>
using namespace std;
// Clase para representar un grafo usando matriz de adyacencia
class Graph {
public:
    // Constructor para inicializar el grafo con n nodos
    Graph(int n) : adjMatrix(n, vector<int>(n, 0)) {}

    // Método para añadir una arista al grafo
    void addEdge(int u, int v) {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // Para grafos no dirigidos, agregar también esta línea
    }

    // Método para imprimir el grafo
    void printGraph() {
        for (const auto& row : adjMatrix) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }

private:
    vector<vector<int>> adjMatrix;
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
