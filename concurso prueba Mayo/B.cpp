#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, mayor = 0, menor = 0;

    cin >> n;

    vector<long long> x(n, 0);

    for (long long i = 0; i < n; i++)
    {
        cin >> x[i];
        if (i == 0)
        {
            menor = x[i];
        }
        menor = min(menor, x[i]);
        mayor = max(mayor, x[i]);
    }

    sort(x.begin(), x.end());

    long long prom = (mayor + menor) / 2;
    int a = 0, b = n - 1;

    long long aux;
    while (a <= b)
    {
        long long k = (a + b) / 2;
        if (x[k] == prom)
        {
            cout << x[k] << "\n";

            return 0;
        }
        if (x[k] < prom)
        {
            a = k + 1;
        }
        else
        {
            b = k - 1;
        }
        aux = k;
    }

    if (prom - x[aux] <= x[aux + 1] - prom)
    {
        cout << x[aux] << "\n";
    }
    else
    {
        cout << x[aux + 1] << "\n";
    }

    return 0;
}