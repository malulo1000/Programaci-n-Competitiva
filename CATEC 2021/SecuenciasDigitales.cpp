#include <bits/stdc++.h>

using namespace std;

int a, b = 1, c = 3, d = 9;

int de(int a)
{
    int x = a;
    while (a > 0)
    {
        x += a % 10;
        a /= 10;
    }
    return x;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a;

    while (1)
    {
        if (a < b && a < c && a < d)
        {
            a = de(a);
        }
        if (b <= a)
        {
            if (a == b)
            {
                cout << "Se encuentra con la secuencia 1 en " << b << ".\n";
                break;
            }
            b = de(b);
        }
        if (c <= a)
        {

            if (a == c)
            {
                cout << "Se encuentra con la secuencia 3 en " << c << ".\n";
                break;
            }
            c = de(c);
        }
        if (d <= a)
        {

            if (a == d)
            {
                cout << "Se encuentra con la secuencia 9 en " << d << ".\n";
                break;
            }
            d = de(d);
        }
    }

    return 0;
}