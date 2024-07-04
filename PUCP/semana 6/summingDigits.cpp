#include <iostream>
#include <string>

using namespace std;

typedef long l;

void descomponer(l *y[], l z, l tam)
{
    while (tam--)
    {
        *y[tam] = z % 10;
        z /= 10;
    }
}

l f(l x, l *a, l tam)
{
    l sum = 0;
    if (x < 10)
        return x;
    else
    {
        descomponer(&a, x, tam);
        for (l i = 0; i < tam; i++)
        {
            sum += a[i];
        }
        string aux = to_string(sum);
        l t = aux.length();
        f(sum, a, t);
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
