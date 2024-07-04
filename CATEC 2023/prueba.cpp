#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

// k >= 3
bool Juzgar(long long n, long long k)
{
    if (n >= 4)
    {
        if (n % 2 == 0)
        {
            return k <= n / 2;
        }
        else
        {
            return (k - 1) <= (n - 3) / 2;
        }
    }
    return false;
}

long long multiplica_modulo(long long a, long long b, long long mod)
{
    if (a == 0 || b < mod / a)
    {
        return (a * b) % mod;
    }
    long long suma = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            suma = (suma + a) % mod;
        }
        a = (2 * a) % mod;
        b >>= 1;
    }
    return suma;
}

long long potencia_modulo(long long a, long long b, long long mod)
{
    long long producto = 1;
    long long secuencia = a % mod;
    while (b > 0)
    {
        if (b & 1)
        {
            producto = multiplica_modulo(producto, secuencia, mod);
        }
        secuencia = multiplica_modulo(secuencia, secuencia, mod);
        b >>= 1;
    }
    return producto;
}

bool MillerRabin(long long n, int semilla)
{
    int k = 0;
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (!(n & 1))
        return false;

    long long m = n - 1;
    while (!(m & 1))
        m >>= 1, k++;

    long long a = semilla;
    a = potencia_modulo(a, m, n);
    if (a == 1 || a == n - 1)
        return true;

    for (int j = 0; j < k - 1; j++)
    {
        a = potencia_modulo(a, 2, n);
        if (a == 1)
            return false;
        if (a == n - 1)
            return true;
    }
    return false;
}

const int MAXN = 1000000;
bool es_primo[MAXN + 10];

void Criba()
{
    memset(es_primo, true, sizeof(es_primo));
    es_primo[0] = es_primo[1] = false;
    for (int i = 2; i * i <= MAXN; i++)
    {
        if (es_primo[i])
        {
            for (int j = 2 * i; j <= MAXN; j += i)
            {
                es_primo[j] = false;
            }
        }
    }
}

bool TestPrimalidad(long long n)
{
    if (n <= MAXN)
    {
        return es_primo[n];
    }
    else
    {
        return MillerRabin(n, 2) && MillerRabin(n, 13) && MillerRabin(n, 23) && MillerRabin(n, 1662803);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    Criba();
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (k > 2)
        {
            cout << (Juzgar(n, k) ? "Yes" : "No") << endl;
        }
        else if (k == 2)
        {
            if (n % 2 == 0)
            {
                cout << (n > 2 ? "Yes" : "No") << endl;
            }
            else
            {
                cout << (TestPrimalidad(n - 2) ? "Yes" : "No") << endl;
            }
        }
        else
        {
            cout << (TestPrimalidad(n) ? "Yes" : "No") << endl;
        }
    }
    return 0;
}
