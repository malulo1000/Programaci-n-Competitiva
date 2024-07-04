#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    while (cin >> n)
    {
        if (n != 0)
        {
            vector<long long> x(n);
            long long rpta[n];
            long long rptaAux = 0;

            for (long long i = 0; i < n; i++)
            {
                cin >> x[i];
            }
            long long cont = 1;
            long long tam = x[0] * 2;
            rpta[0] = x[0];

            while ((x[cont] - x[cont - 1]) <= tam)
            {
                long long minicont = 0;
                if (x[cont + minicont] - x[cont - 1] == tam)
                {
                    rptaAux++;
                    rpta[rptaAux] = x[cont + minicont];
                    cont += minicont;
                }
                else if (x[cont + minicont] - x[cont - 1] > tam)
                {
                    rptaAux++;
                    rpta[rptaAux] = x[cont - 1 + minicont];
                    cont = cont - 1 + minicont;
                }
                if ((cont + minicont + 1) < n)
                {
                    minicont++;
                }
                else
                {
                    break;
                }
            }

            if (x[cont] - x[cont - 1] > tam)
            {
                cout << "Imposible para Pepito\n";
            }
            else
            {
                cout << rpta[0];
                for (long long i = 1; i < rptaAux; i++)
                {
                    cout << " " << rpta[i];
                }
                cout << "\n";
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}