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

        for (auto i = 1; i < n; i++)
            an[i] = (an[i - 1] * a + b) % m;

        long long x = 0;
        for (auto i = 1; i < n - 1; i++)
        {
            if (an[i] < an[i - 1])
            {
                long long y = an[i - 1] - an[i];
                if (an[i] < an[i + 1])
                {
                    long long z = an[i + 1] - an[i];
                    if (y > z)
                    {

                        cout << z << " ";
                        x += z;
                    }
                    else
                    {
                        cout << y << " ";
                        x += y;
                    }
                }
                else
                    continue;
            }
            else
                continue;
        }

        cout << x << "\n";
    }

    return 0;
}
