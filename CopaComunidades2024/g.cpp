#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, c;
    long long sa = 0, sc = 0;
    cin >> a;
    cin >> c;

    for (auto &i : a)
    {
        if (i >= '0' && i <= '9')
        {
            sa += i - '0';
        }
        else if (i >= 'a' && i <= 'z')
        {
            sa += 10 + (i - 'a');
        }
        else if (i >= 'A' && i <= 'Z')
        {
            sa += 20 + 2 * (i - 'A');
        }
    }

    for (auto &i : c)
    {
        if (i >= '0' && i <= '9')
        {
            sc += i - '0';
        }
        else if (i >= 'a' && i <= 'z')
        {
            sc += 10 + (i - 'a');
        }
        else if (i >= 'A' && i <= 'Z')
        {
            sc += 20 + 2 * (i - 'A');
        }
    }

    if (sa > sc)
    {
        cout << "Ana " << sa << "\n";
    }
    else
    {
        cout << "Carolina " << sc << "\n";
    }

    return 0;
}
