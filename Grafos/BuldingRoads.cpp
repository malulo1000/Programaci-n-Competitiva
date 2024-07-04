#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> vis;
vector<int> lead;

void dfs(int u)
{
    vis[u] = true;
    for (int v : g[u])
    {
        if (!vis[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    g.resize(n + 1);
    vis.resize(n + 1, false);

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
        {
            lead.push_back(i);
            dfs(i);
        }
    }

    cout << lead.size() - 1 << '\n';
    for (int i = 1; i < lead.size(); ++i)
    {
        cout << lead[i - 1] << ' ' << lead[i] << '\n';
    }
    return 0;
}
