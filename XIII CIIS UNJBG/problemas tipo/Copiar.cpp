#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005; // Tamaño máximo del arreglo.

int arr[MAXN]; // El arreglo de entrada.

// Definición de la estructura del árbol de segmento.
struct SegmentTree
{
    int n;            // Tamaño del arreglo.
    vector<int> tree; // Representa el árbol de segmento.

    // Constructor del árbol de segmento.
    SegmentTree(int sz)
    {
        n = sz;
        tree.resize(4 * n); // El tamaño del árbol de segmento es generalmente 4 veces el tamaño del arreglo.
    }

    // Función para construir el árbol de segmento.
    void build(int node, int left, int right)
    {
        if (left == right)
            tree[node] = arr[left];
        else
        {
            int mid = (left + right) / 2;
            build(2 * node, left, mid);          // Construye el hijo izquierdo.
            build(2 * node + 1, mid + 1, right); // Construye el hijo derecho.
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    // Función para realizar una consulta de intervalo.
    int query(int node, int left, int right, int l, int r)
    {
        if (right < l || left > r)
            return 0; // El intervalo está fuera de los límites.
        if (l <= left && right <= r)
            return tree[node]; // El intervalo está completamente contenido.

        int mid = (left + right) / 2;
        int leftSum = query(2 * node, left, mid, l, r);
        int rightSum = query(2 * node + 1, mid + 1, right, l, r);
        return leftSum + rightSum;
    }

    // Función para actualizar un elemento en el arreglo y en el árbol de segmento.
    void update(int node, int left, int right, int index, int newValue)
    {
        if (left == right)
        {
            arr[index] = newValue;
            tree[node] = newValue;
        }
        else
        {
            int mid = (left + right) / 2;
            if (index <= mid)
                update(2 * node, left, mid, index, newValue);
            else
                update(2 * node + 1, mid + 1, right, index, newValue);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }
};

int main()
{
    int n; // Tamaño del arreglo.
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Crear el árbol de segmento y construirlo.
    SegmentTree segmentTree(n);
    segmentTree.build(1, 0, n - 1);

    // Realizar consultas de intervalo.
    int l, r;
    cin >> l >> r;
    int result = segmentTree.query(1, 0, n - 1, l, r);
    cout << "La suma en el intervalo [" << l << ", " << r << "] es: " << result << endl;

    // Actualizar un elemento en el arreglo y en el árbol de segmento.
    int index, newValue;
    cin >> index >> newValue;
    segmentTree.update(1, 0, n - 1, index, newValue);
    return 0;
}
