#include <iostream>
#include <vector>
#include <cstring> // Para memset
using namespace std;

const int INF = 1e9; // Valor infinito (puedes ajustarlo según sea necesario)
const int N = 100;   // Tamaño máximo de la matriz

int dp[N][N];                // Tabla de memoización para almacenar los resultados intermedios
int matrix[N][N];            // La matriz de entrada
int n;                       // Tamaño de la matriz
vector<pair<int, int>> path; // Almacenar las coordenadas del camino más corto

// Función recursiva para encontrar el camino más corto y las coordenadas
bool findShortestPath(int i, int j)
{
    // Si ya hemos calculado el resultado para esta celda, devuélvelo
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    // Si estamos en la celda de destino, el camino más corto es el valor en esa celda
    if (i == n - 1 && j == n - 1)
    {
        path.push_back({i, j});
        return true;
    }

    // Inicializa el valor de la respuesta como infinito
    bool foundPath = false;

    // Calcula el camino más corto moviéndose hacia abajo
    if (i + 1 < n && matrix[i + 1][j] != -1)
    {
        foundPath = findShortestPath(i + 1, j);
    }

    // Calcula el camino más corto moviéndose hacia la derecha
    if (!foundPath && j + 1 < n && matrix[i][j + 1] != -1)
    {
        foundPath = findShortestPath(i, j + 1);
    }

    // Si encontramos un camino válido, almacenar la coordenada actual en el camino
    if (foundPath)
    {
        path.push_back({i, j});
    }

    // Almacenar el resultado en la tabla de memoización y devolverlo
    dp[i][j] = foundPath;
    return foundPath;
}

int main()
{
    cout << "Ingrese el tamaño de la matriz (n): ";
    cin >> n;

    cout << "Ingrese los valores de la matriz:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Inicializar la tabla de memoización con -1 (ningún valor calculado)
    memset(dp, -1, sizeof(dp));

    // Llamar a la función para encontrar el camino más corto desde (0,0) hasta (n,n)
    bool hasPath = findShortestPath(0, 0);

    if (hasPath)
    {
        cout << "El camino más corto pasa por las siguientes coordenadas en orden inverso:" << endl;

        for (int i = path.size() - 1; i >= 0; i--)
        {
            cout << "(" << path[i].first << "," << path[i].second << ") ";
        }
    }

    return 0;
}
