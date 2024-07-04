#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &L, int m)
{
    sort(L.begin(), L.end());

    int iz = 0;
    int der = L[n - 1] - L[0];
    int mD = 0;

    while (iz <= der)
    {
        int mid = iz + (der - iz) / 2;
        int cont = 1;
        int lp = L[0];

        for (int i = 1; i < n; ++i)
        {
            if (L[i] - lp >= mid)
            {
                cont++;
                lp = L[i];
            }
            if (cont == m)
                break;
        }

        if (cont >= m)
        {
            mD = mid;
            iz = mid + 1;
        }
        else
        {
            der = mid - 1;
        }
    }

    return mD;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    vector<int> L(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> L[i];
    }

    int m;
    cin >> m;
    int x = solve(n, L, m);

    cout << x << "\n";

    return 0;
}
