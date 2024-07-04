#include <iostream>
#include <vector>

using namespace std;

vector<int> arbol;

void construirArbol(vector<int> &arr, int v, int izq, int der)
{
    if (izq == der)
    {
        arbol[v] = arr[izq];
    }
    else
    {
        int t = izq + (der - izq) / 2;
        construirArbol(arr, v * 2, izq, t);
        construirArbol(arr, v * 2 + 1, t + 1, der);
        arbol[v] = arbol[v * 2] + arbol[v * 2 + 1];
    }
}

void actualizarArbol(int v, int izq, int der, int pos, int val)
{
    if (izq == der)
    {
        arbol[v] = val;
    }
    else
    {
        int t = izq + (der - izq) / 2;
        if (pos <= t)
        {
            actualizarArbol(v * 2, izq, t, pos, val);
        }
        else
        {
            actualizarArbol(v * 2 + 1, t + 1, der, pos, val);
        }
        arbol[v] = arbol[v * 2] + arbol[v * 2 + 1];
    }
}

int consultarArbol(int v, int izq, int der, int inicio, int fin)
{
    if (inicio > fin)
    {
        return 0;
    }
    if (izq == inicio && der == fin)
    {
        return arbol[v];
    }
    int t = izq + (der - izq) / 2;
    int leftSum = consultarArbol(v * 2, izq, t, inicio, min(fin, t));
    int rightSum = consultarArbol(v * 2 + 1, t + 1, der, max(inicio, t + 1), fin);
    return leftSum + rightSum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, value, n1;
    cin >> n;
    vector<int> casas(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> casas[i];
    }
    arbol.resize(4 * n);
    construirArbol(casas, 1, 1, n);

    cin >> n1;

    char x;
    int pos, monto;
    while (n1--)
    {
        cin >> x >> pos >> monto;
        if (x == 'R')
        {

            int total = consultarArbol(1, 1, n, pos, monto);
            cout << total << "\n";
        }
        else
        {
            if (x == 'U')
                casas[pos] = casas[pos] + monto;
            actualizarArbol(1, 1, n, pos, casas[pos]);
        }
    }
    return 0;
}