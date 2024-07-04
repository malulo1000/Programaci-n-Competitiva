#include <bits/stdc++.h>
using namespace std;

int n, m, x;
vector<pair<int, int>> p = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<vector<bool>> v;

bool u(int a, int b) { return a >= 0 && a < n && b >= 0 && b < m && !v[a][b]; }

void d(int a, int b)
{
    v[a][b] = true;
    for (auto z : p)
        if (u(a + z.first, b + z.second))
            d(a + z.first, b + z.second);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    v.assign(n, vector<bool>(m, 0));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            char c;
            cin >> c;
            if (c == '#')
                v[i][j] = 1;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!v[i][j])
            {
                d(i, j);
                x++;
            }
        }
    }

    cout << x << '\n';

    return 0;
}
