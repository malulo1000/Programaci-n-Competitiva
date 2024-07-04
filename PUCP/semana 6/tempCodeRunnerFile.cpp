#include <iostream>
#include <string>

using namespace std;

typedef long l;

l descomponer(l *y[], long z, l tam)
{
    string aux = to_string(z);
    while (tam--)
    {
        *y[tam] = z % 10;
        z /= 10;
    }
    return aux.length();
}

l f(l x, l *a, l tam)
{
    l sum = 0, aux;
    if (x < 10)
        return x;
    else
    {
        aux = descomponer(&a, x, tam);
        for (l i = 0; i < aux; i++)
        {
            sum += a[i];
        }
        f(sum, a, aux);
    }
}

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    l n;
    while (cin >> n && n != 0)
    {
        string aux = to_string(n);
        l tam = aux.length();
        l array[tam];
        cout << f(n, array, tam) << "\n";
    }

    return 0;
}
