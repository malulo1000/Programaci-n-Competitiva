#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, aux;
    cin >> n;

    vector<int> p, m, a;
    p.reserve(n);
    m.reserve(n);
    a.reserve(n);

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        if (aux == 1)
            p.push_back(i);
        else if (aux == 2)
            m.push_back(i);
        else
            a.push_back(i);
    }

    vector<size_t> c = {p.size(), m.size(), a.size()};

    sort(c.begin(), c.end());

    if (c[0] != 0)
    {
        cout << c[0] << "\n";
        for (int i = 0; i < c[0]; i++)
        {
            cout << p[i] + 1 << " " << m[i] + 1 << " " << a[i] + 1 << "\n";
        }
    }
    else
        cout << "0\n";

    return 0;
}