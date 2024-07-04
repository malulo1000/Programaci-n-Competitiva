#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    cin >> n;

    vector<string> oq;
    map<string, vector<string>> r;
    map<string, int> d;

    for (int i = 0; i < stoi(n) - 1; ++i)
    {
        string A, B;
        cin >> A >> B;
        r[B].push_back(A);
    }

    for (const auto &j : r)
    {
        const string &i = j.first;
        for (const string &o : r[i])
        {
            ++d[o];
        }
    }

    queue<string> q;
    for (const auto &kvp : r)
    {
        const string &i = kvp.first;
        if (d[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        string p = q.front();
        q.pop();
        oq.push_back(p);
        for (const string &del : r[p])
        {
            if (--d[del] == 0)
            {
                q.push(del);
            }
        }
    }

    for (const string &i : oq)
    {
        cout << i << "\n";
    }

    return 0;
}
