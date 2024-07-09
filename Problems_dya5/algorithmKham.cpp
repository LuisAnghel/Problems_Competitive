#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

vector<int> ordenacion_topologica(int n, vector<pair<int, int>>& dependencias) {
    unordered_map<int, vector<int>> grafo;
    vector<int> grado_entrada(n, 0);
    
    for (auto& dep : dependencias) {
        int u = dep.first;
        int v = dep.second;
        grafo[u].push_back(v);
        grado_entrada[v]++;
    }
    
    queue<int> cola;
    for (int i = 0; i < n; ++i) {
        if (grado_entrada[i] == 0) {
            cola.push(i);
        }
    }
    
    vector<int> orden_topologico;
    
    while (!cola.empty()) {
        int nodo = cola.front();
        cola.pop();
        orden_topologico.push_back(nodo);
        
        for (int vecino : grafo[nodo]) {
            grado_entrada[vecino]--;
            if (grado_entrada[vecino] == 0) {
                cola.push(vecino);
            }
        }
    }
    
    if (orden_topologico.size() == n) {
        return orden_topologico;
    } else {
        return {};
    }
}

int main() {
    int n = 4;
    vector<pair<int, int>> dependencias = {{0, 1}, {1, 2}, {3, 1}, {3, 4}};
    
    vector<int> resultado = ordenacion_topologica(n, dependencias);
    
    if (!resultado.empty()) {
        cout << "Orden topologico: ";
        for (int nodo : resultado) {
            cout << nodo << " ";
        }
        cout << endl;
    } else {
        cout << "No es posible ordenar las tareas debido a un ciclo." << endl;
    }
    
    return 0;
}
