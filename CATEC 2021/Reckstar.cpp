#include <bits/stdc++.h>

using namespace std;

map<int, bool> m;
vector<int> m1;
int p, n, x = 0;

int main()
{
    ios::sync_with_stdio();
    cin.tie();
    cout.tie();
    cin >> p >> n;

    m1.resize(p);

    for (auto i = 0; i < p; i++)
    {
        int t;
        cin >> t;
        m[t] = 1;
        m1[i] = t;
    }
    sort(m1.begin(), m1.end());

    for (auto i = 0; i < p - 1; i++)
    {
        if (m1[i] > m1[p - 1])
        {
            break;
        }
        if (m[m1[i] + n] == 1)
        {
            x++;
        }
    }

    cout << x << "\n";

    return 0;
}