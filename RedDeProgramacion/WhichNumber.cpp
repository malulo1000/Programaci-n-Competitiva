#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

ll calcularNumero(ll n, const vector<ll> &primos)
{
    ll contador = 0, numero = 1;

    while (contador < n)
    {
        bool saltarNumero = false;
        for (ll primo : primos)
        {
            if (numero % primo == 0)
            {
                saltarNumero = true;
                break;
            }
        }

        if (!saltarNumero)
        {
            contador++;
        }

        numero++;
    }

    return numero - 1;
}

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> primos(k);
    for (ll i = 0; i < k; i++)
    {
        cin >> primos[i];
    }

    sort(primos.begin(), primos.end());

    ll resultado = calcularNumero(n, primos);

    cout << resultado << "\n";

    return 0;
}
