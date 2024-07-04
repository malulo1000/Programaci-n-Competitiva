#include <iostream>
#include <vector>
#include <cstring>
#include <climits>

using namespace std;

const int MAXN = 100; // Tamaño máximo de la matriz
int dp[MAXN][MAXN];   // Arreglo de memoización
int grid[MAXN][MAXN]; // La matriz de entrada

// Función recursiva para encontrar el camino más corto y su suma
int findShortestPath(int x, int y, int n)
{
    if (x == n && y == n)
        return grid[x][y];

    if (dp[x][y] != -1)
        return dp[x][y];

    int right = INT_MAX, down = INT_MAX;
    if (x < n)
        down = findShortestPath(x + 1, y, n);
    if (y < n)
        right = findShortestPath(x, y + 1, n);

    dp[x][y] = grid[x][y] + min(right, down);
    return dp[x][y];
}

int main()
{
    int n; // Tamaño de la matriz
    cout << "Ingrese el tamaño de la matriz (n): ";
    cin >> n;

    cout << "Ingrese la matriz " << n << "x" << n << ":" << endl;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> grid[i][j];
        }

    // Inicializar el arreglo de memoización
    memset(dp, -1, sizeof(dp));

    int shortestPath = findShortestPath(1, 1, n); // Iniciar desde (1, 1)
    cout << "La longitud del camino más corto es: " << shortestPath << endl;

    return 0;
}
