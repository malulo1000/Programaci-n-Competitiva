#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<string, vector<pair<string, long long>>> x;
    map<string, long long> sum;

    long long n;
    cin >> n;

    for (auto i = 0; i < n; i++)
    {
        string nom;
        string c;
        long long v;

        cin >> nom >> c >> v;

        if (x.find(nom) != x.end())
        {
            bool f = false;
            for (auto &p : x[nom])
            {
                if (p.first == c)
                {
                    if (v > p.second)
                    {
                        p.second = v;
                    }
                    f = true;
                    break;
                }
            }
            if (!f)
            {
                x[nom].push_back(make_pair(c, v));
            }
        }
        else
        {
            x[nom].push_back(make_pair(c, v));
        }

        sum[nom] = 0;
        for (const auto &j : x[nom])
        {
            sum[nom] += j.second;
        }
    }

    vector<pair<long long, string>> tot;
    for (const auto &j : sum)
    {
        tot.push_back(make_pair(j.second, j.first));
    }

    sort(tot.begin(), tot.end(), [](const pair<long long, string> &a, const pair<long long, string> &b)
         {
        if (a.first != b.first)
        {
            return a.first > b.first;
        }
        else
        {
            return a.second < b.second;
        } });

    for (const auto &p : tot)
    {
        cout << p.second << "\n";
    }

    return 0;
}
