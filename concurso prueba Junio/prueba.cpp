#include <iostream>
#include <vector>
using namespace std;

vector<int> data;

int tribonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    if (data[n] != 0)
        return data[n];

    data[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);

    return data[n];
}

int main()
{
    int n, p;
    cin >> n;
    vector<int> arreglo;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (p != 0)
        {
            data.resize(p + 1, 0);
            data[0] = 0;
            data[1] = 1;
            data[2] = 1;
            int valor = tribonacci(p);
            arreglo.push_back(valor);
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << endl;
    }

    return 0;
}