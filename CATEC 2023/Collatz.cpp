// CODEx

#include <bits/stdc++.h>

using namespace std;
const long long N = 1000000;
bool is_prime[N + 1];

void Primos()
{
    fill(is_prime, is_prime + N + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (long long i = 2; i * i <= N; i++)
        if (is_prime[i])
            for (long long j = i * i; j <= N; j += i)
                is_prime[j] = false;
}

map<long, long> a;
vector<long long> rpta;

int main()
{
    Primos();
    long long x, cont, contF = 0, primoF, primo, masLargo;

    cin >> x;
    rpta.resize(x);

    for (long long i = 1; i <= x; i++)
    {
        long long j = i;
        cont = 0;
        if (a[i] == 0)
        {
            while (j != 1)
            {
                if (j % 2 == 0)
                {
                    j /= 2;
                }
                else
                {
                    j *= 3;
                    j++;
                }
                cont++;
            }
            a[i] = cont;
            if (contF < cont)
            {
                contF = cont;
                masLargo = i;
            }
        }
    }

    long long trasht = masLargo;

    while (trasht != 1)
    {
        if (trasht % 2 == 0)
        {
            trasht /= 2;
            if (is_prime[trasht])
            {
                rpta.push_back(trasht);
            }
        }
        else
        {
            trasht *= 3;
            trasht++;
            if (is_prime[trasht])
            {
                rpta.push_back(trasht);
            }
        }
    }

    sort(rpta.begin(), rpta.end());
    long maxM = *std::max_element(rpta.begin(), rpta.end());

    cout
        << "El numero " << masLargo << " genera la cadena mas larga con " << contF + 1 << " pasos hasta llegar al 1.\n";
    cout << "El numero primo mas grande en la secuencia es " << maxM << ".\n";
    return 0;
}