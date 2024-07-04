#include <iostream>
#include <string.h>

using namespace std;

char camino(char x[][1000], int &a, int &b, char u)
{
    switch (u)
    {
    case 'U':
        if (x[a - 1][b] == '.' || x[a - 1][b] == 'B')
        {

            if (x[a - 1][b] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'U';
            }
            a--;
        }
        else if (x[a][b - 1] == '.' || x[a][b - 1] == 'B')
        {

            if (x[a][b - 1] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'L';
            }
            b--;
        }
        else if (x[a][b + 1] == '.' || x[a][b + 1] == 'B')
        {

            if (x[a][b + 1] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'R';
            }
            b++;
        }
        else
        {
            u = 'N';
        }
        break;
    case 'D':
        if (x[a + 1][b] == '.' || x[a + 1][b] == 'B')
        {

            if (x[a - 1][b] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'D';
            }
            a++;
        }
        else if (x[a][b - 1] == '.' || x[a][b - 1] == 'B')
        {

            if (x[a][b - 1] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'L';
            }
            b--;
        }
        else if (x[a][b + 1] == '.' || x[a][b + 1] == 'B')
        {

            if (x[a][b + 1] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'R';
            }
            b++;
        }
        else
        {
            u = 'N';
        }
        break;
    case 'R':
        if (x[a + 1][b] == '.' || x[a + 1][b] == 'B')
        {

            if (x[a - 1][b] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'D';
            }
            a++;
        }
        if (x[a - 1][b] == '.' || x[a - 1][b] == 'B')
        {

            if (x[a - 1][b] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'U';
            }
            a--;
        }
        else if (x[a][b + 1] == '.' || x[a][b + 1] == 'B')
        {

            if (x[a][b + 1] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'R';
            }
            b++;
        }
        else
        {
            u = 'N';
        }
        break;
    case 'L':
        if (x[a + 1][b] == '.' || x[a + 1][b] == 'B')
        {

            if (x[a - 1][b] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'D';
            }
            a++;
        }
        else if (x[a - 1][b] == '.' || x[a - 1][b] == 'B')
        {

            if (x[a - 1][b] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'U';
            }
            a--;
        }
        else if (x[a][b - 1] == '.' || x[a][b - 1] == 'B')
        {

            if (x[a][b - 1] == 'B')
            {
                u = 'B';
            }
            else
            {
                u = 'L';
            }
            b--;
        }
        else
        {
            u = 'N';
        }
        break;
    }

    return u;
}

int main()
{
    int n, m;
    cin >> n >> m;

    char x[1000][1000], u = '-';
    int sx, sy, cont;
    string rpta;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x[i][j];
            if (x[i][j] == 'A')
            {
                sx = i;
                sy = j;
            }
        }
    }

    while (u != 'B' || u != 'N')
    {
        u = camino(x, sx, sy, u);
        cont++;
        if (u != 'B')
        {
            rpta.push_back(u);
        }
    }

    if (u == 'B')
    {
        cout << "YES\n"
             << cont << "\n"
             << rpta << "\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}