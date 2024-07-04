#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long n;
    cin >> n;
    while (n--)
    {
        long x;
        cin >> x;
        long a[x], b[x];
        for (long i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        for (long i = 0; i < x; i++)
        {
            cin >> b[i];
        }
        long ini, fin;
        for (long i = 0; i < x; i++)
        {
            if (a[i] != b[i])
            {
                ini = i + 1;
                break;
            }
        }
        for (long i = x - 1; i > ini; i--)
        {
            if (a[i] != b[i])
            {
                fin = i + 1;
                break;
            }
        }
        for (long i = ini - 1; i > 0; i--)
        {
            if (b[i] >= b[i - 1])
            {
                ini--;
            }
        }
        for (long i = fin - 1; i < x - 1; i++)
        {
            if (b[i] <= b[i + 1])
            {
                fin++;
            }
        }
        cout << ini << " " << fin << "\n";
    }

    return 0;
}