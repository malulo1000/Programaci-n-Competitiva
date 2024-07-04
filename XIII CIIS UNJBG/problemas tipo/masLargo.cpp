#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAXN = 100; // Tamaño máximo de la matriz
int dp[MAXN][MAXN];   // Arreglo de memoización
int grid[MAXN][MAXN]; // La matriz de entrada

// Función recursiva para encontrar el camino más largo y su suma
int findLongestPath(int x, int y, int n)
{
    if (x == n && y == n)
        return grid[x][y];

    if (dp[x][y] != -1)
        return dp[x][y];

    int right = -1, down = -1;
    if (x < n)
        down = findLongestPath(x + 1, y, n);
    if (y < n)
        right = findLongestPath(x, y + 1, n);

    dp[x][y] = grid[x][y] + max(right, down);
    return dp[x][y];
}

int main()
{
    int n; // Tamaño de la matriz
    cout << "Ingrese el tamaño de la matriz (n): ";
    cin >> n;

    cout << "Ingrese la matriz " << n << "x" << n << ":" << endl;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                grid[i][j] = 0; // Rellenar los bordes de la matriz con 0
            else
                cin >> grid[i][j];
        }

    // Inicializar el arreglo de memoización
    memset(dp, -1, sizeof(dp));

    int longestPath = findLongestPath(1, 1, n); // Iniciar desde (1, 1)
    cout << "La longitud del camino más largo es: " << longestPath << endl;

    return 0;
}
