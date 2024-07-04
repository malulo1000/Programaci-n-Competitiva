#include <iostream>
#include <vector>

using namespace std;

// Función para verificar si un grafo es bipartito
bool esBipartito(vector<vector<int>> &grafo, int nodo, vector<int> &colores, int color)
{
    colores[nodo] = color;

    for (int vecino : grafo[nodo])
    {
        if (colores[vecino] == -1)
        {
            if (!esBipartito(grafo, vecino, colores, 1 - color))
                return false;
        }
        else if (colores[vecino] == color)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int numVertices, numAristas;
    cout << "Ingrese el número de vértices y aristas: ";
    cin >> numVertices >> numAristas;

    vector<vector<int>> grafo(numVertices);

    cout << "Ingrese las aristas (vértice u y vértice v):" << endl;
    for (int i = 0; i < numAristas; i++)
    {
        int u, v;
        cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }

    vector<int> colores(numVertices, -1);

    bool bipartito = true;
    for (int i = 0; i < numVertices; i++)
    {
        if (colores[i] == -1 && !esBipartito(grafo, i, colores, 0))
        {
            bipartito = false;
            break;
        }
    }

    if (bipartito)
    {
        cout << "El grafo es bipartito." << endl;
    }
    else
    {
        cout << "El grafo no es bipartito." << endl;
    }

    return 0;
}
