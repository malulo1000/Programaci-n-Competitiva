#include <bits/stdc++.h>

using namespace std;

bool dfs(vector<vector<long long>> &mt, vector<vector<bool>> &vis, long long x, long long y, long long &pas, long long N, long long M)
{
    if ((x == 0 && !(mt[x][y] & 2)) ||
        (y == 0 && !(mt[x][y] & 1)) ||
        (x == N - 1 && !(mt[x][y] & 8)) ||
        (y == M - 1 && !(mt[x][y] & 4)))
    {
        return true;
    }

    vis[x][y] = true;
    vector<pair<long long, long long>> d = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};

    for (auto &i : d)
    {
        long long nx = x + i.first;
        long long ny = y + i.second;
        if (nx >= 0 && nx < N && ny >= 0 && ny < M && !vis[nx][ny])
        {
            if ((i.first == 0 && i.second == -1 && !(mt[x][y] & 1)) ||
                (i.first == -1 && i.second == 0 && !(mt[x][y] & 2)) ||
                (i.first == 0 && i.second == 1 && !(mt[x][y] & 4)) ||
                (i.first == 1 && i.second == 0 && !(mt[x][y] & 8)))
            {
                pas++;
                if (dfs(mt, vis, nx, ny, pas, N, M))
                {
                    return true;
                }
                pas--;
            }
        }
    }

    vis[x][y] = false;
    return false;
}

long long solve(long long N, long long M, long long x0, long long y0, vector<vector<long long>> &mt)
{
    vector<vector<bool>> vis(N, vector<bool>(M, false));
    long long pas = 0;
    if (dfs(mt, vis, x0 - 1, y0 - 1, pas, N, M))
    {
        return pas;
    }
    else
    {
        return -1;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long N, M, x0, y0;
    cin >> N >> M;
    cin >> x0 >> y0;

    vector<vector<long long>> mt(N, vector<long long>(M));
    for (auto i = 0; i < N; i++)
    {
        for (auto j = 0; j < M; j++)
        {
            cin >> mt[i][j];
        }
    }

    long long x = solve(N, M, x0, y0, mt);
    cout << x << "\n";

    return 0;
}
