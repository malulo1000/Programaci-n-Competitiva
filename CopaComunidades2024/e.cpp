#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a;

    while (cin >> a)
    {
        if (a == 0)
        {
            break;
        }
        vector<long long> y(a, 0), x(a, 0);
        for (long long i = 0; i < a; i++)
        {
            cin >> y[i];
        }
        x[0] = y[0];

        for (long long i = 1; i < a; i++)
        {
            x[i] = y[i - 1] ^ y[i];
        }

        for (const auto &i : x)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}
