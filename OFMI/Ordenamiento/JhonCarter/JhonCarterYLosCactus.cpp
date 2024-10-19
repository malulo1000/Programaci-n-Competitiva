#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;

    // Leer el número de cactus y sus posiciones
    cin >> N;
    vector<int> cactus(N);
    for (int i = 0; i < N; i++)
    {
        cin >> cactus[i];
    }

    // Ordenar las posiciones de los cactus
    sort(cactus.begin(), cactus.end());

    // Leer el número de posiciones que John está considerando
    cin >> M;
    vector<int> escape(M);
    for (int i = 0; i < M; i++)
    {
        cin >> escape[i];
    }

    // Procesar cada posición que John está considerando
    for (int i = 0; i < M; i++)
    {
        int pos = escape[i];

        // Encontrar la posición donde debería estar escape[i] en el vector cactus
        auto it = lower_bound(cactus.begin(), cactus.end(), pos);

        if (it != cactus.end() && *it == pos)
        {
            // Si John quiere pasar exactamente por la posición de un cactus
            cout << 0;
        }
        else
        {
            int derecha = *it;
            int izquierda = *(--it);
            cout << derecha - izquierda; // Imprimir la distancia entre los dos cactus
        }

        if (i < M - 1)
            cout << " ";
    }

    cout << endl;
    return 0;
}
