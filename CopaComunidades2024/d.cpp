#include <bits/stdc++.h>

using namespace std;

long long cCua(long long n)
{
    long long cont = 0;

    for (long long i = 1; i <= n; ++i)
    {
        cont += (n - i + 1) * (n - i + 1);
    }

    return cont;
}

long long cRec(int n)
{
    long long cont = 0;

    long long cR = (long long)n * (n + 1) / 2;
    long long cC = (long long)n * (n + 1) / 2;

    cont = cR * cC;

    return cont;
}

int main()
{

    long long n;

    while (cin >> n)
    {
        long long cua = cCua(n);
        long long rec = cRec(n);
        cout << cua << " " << rec << "\n";
    }

    return 0;
}
