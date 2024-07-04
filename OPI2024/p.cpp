#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, a, b, m, so;
        cin >> n >> a >> b >> m >> so;

        vector<long long> an(n);
        an[0] = so;

        for (int i = 1; i < n; i++)
        {
            an[i] = (an[i - 1] * a + b) % m;
        }

        long long x = 0;
        bool fla = false;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (i == 0 && an[i] <= an[j])
                {
                    fla = true;
                }
                else if (i == n - 2 && j == n - 1 && an[i] > an[j])
                {
                    i = n;
                    break;
                }
                else if (an[j] < an[i])
                {
                    cout << "Prueba: " << i << " a: " << j << " ::" << x << "\n";
                    x += (an[i] - an[j]);
                }
                else
                {
                    fla = true;
                    i = j - 1;
                    break;
                }
            }
        }

        if (fla)
        {
            cout << x;
        }
        else
        {
            cout << 0;
        }
        cout << "\n";
    }

    return 0;
}
