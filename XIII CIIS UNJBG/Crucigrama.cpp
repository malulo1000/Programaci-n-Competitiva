#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;

    int x = -1, y = -1;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                x = i;
                y = j;
                break;
            }
        }
        if (x != -1)
            break;
    }

    vector<vector<char>> z(b.size(), vector<char>(a.size(), '.'));
    for (int i = 0; i < a.size(); i++)
    {
        z[y][i] = a[i];
    }

    for (int i = 0; i < b.size(); i++)
    {
        z[i][x] = b[i];
    }

    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            cout << z[i][j];
        }
        cout << "\n";
    }

    return 0;
}
