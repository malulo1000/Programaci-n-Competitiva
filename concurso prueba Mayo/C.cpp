#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    long long a[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long numcons;

    cin >> numcons;

    for (long long i = 0; i < numcons; i++)
    {
        long long ini, fin;
        cin >> ini >> fin;

        long long marcador;
        for (long long j = ini - 1; j < fin; j++)
        {
            bool flag = false;
            for (long long k = ini - 1; k < fin; k++)
            {
                long long cantidad = 0;
                if (a[j] % a[k] == 0)
                {
                    cantidad++;
                }
                if (cantidad == fin - ini + 1)
                {
                    flag = true;
                }
            }
            if (flag)
            {
                marcador = i;
                break;
            }
        }
        long long cont = 0;
        for (long long j = ini - 1; j < fin; j++)
        {
            if (marcador == a[j])
            {
                cont++;
            }
        }
        cout << ini << "   " << fin << "  " << cont << "\n\n";
        cout << (fin - ini + 1) - cont << "\n";
    }

    return 0;
}