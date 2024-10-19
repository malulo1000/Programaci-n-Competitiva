#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;

    // 1) Lectura de cactus
    // Leer el número de cactus y sus posiciones
    cin >> N;
    vector<int> cactus(N);
    for (int i = 0; i < N; i++)
    {
        cin >> cactus[i];
    }

    // 2) Ordenar los cactus según su posición
    // Ordenar las posiciones de los cactus
    sort(cactus.begin(), cactus.end());

    // 3) Lectura de posiciones que John está considerando
    // Leer el número de posiciones que John está considerando
    cin >> M;
    vector<int> escape(M);
    for (int i = 0; i < M; i++)
    {
        cin >> escape[i];
    }

    // 4) Procesar cada posición que John está considerando
    for (int i = 0; i < M; i++)
    {
        int pos = escape[i];

        // 4.1) Encontrar la posición más cercana de los cactus
        auto it = lower_bound(cactus.begin(), cactus.end(), pos);

        if (it != cactus.end() && *it == pos)
        {
            // 4.2) Si John quiere pasar exactamente por la posición de un cactus
            cout << 0;
        }
        else
        {
            // 4.3) Si no hay cactus en la posición, calcular distancia entre los cactus más cercanos
            int derecha = *it;
            int izquierda = *(--it);
            cout << derecha - izquierda; // Imprimir la distancia entre los dos cactus
        }

        // 5) Formatear la salida con espacios entre números
        if (i < M - 1)
            cout << " ";
    }

    // 6) Fin del programa con una nueva línea
    cout << endl;
    return 0;
}
