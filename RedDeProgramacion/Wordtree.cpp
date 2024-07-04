#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>

using namespace std;

int getCost(const string &s1, const string &s2, int k, unordered_map<string, int> &memo)
{
    string key = s1 + "|" + s2;
    if (memo.count(key))
        return memo[key];

    int cost = 0;
    for (int i = 0; i < k; ++i)
    {
        cost += abs(s1[i] - s2[i]);
    }

    memo[key] = cost;
    return cost;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;

    vector<string> cadenas(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> cadenas[i];
    }

    vector<vector<int>> costo(n, vector<int>(n));

    unordered_map<string, int> memo;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            costo[i][j] = costo[j][i] = getCost(cadenas[i], cadenas[j], k, memo);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                costo[j][k] = min(costo[j][k], max(costo[j][i], costo[i][k]));
            }
        }
    }

    int max_cost = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            max_cost = max(max_cost, costo[i][j]);
        }
    }

    cout << max_cost << endl;

    return 0;
}
