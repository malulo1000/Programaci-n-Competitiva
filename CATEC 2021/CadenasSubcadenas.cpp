#include <bits/stdc++.h>

using namespace std;

string a, b;
bool f;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    getline(cin, a);
    cin.ignore();
    getline(cin, b);

    for (auto i = 0; i < a.size() - b.size(); i++)
    {
        if (a[i] == b[0])
        {
            for (auto j = 1; j < b.size(); j++)
            {
                if (a[i + j] != b[j])
                {
                    break;
                }
                if (j == b.size() - 1 && a[i + j] == b[j])
                    f = 1;
            }
        }
        if (f)
            break;
    }

    if (f)
        cout << "La subcadena si existe en la cadena.\n";
    else
        cout << "La subcadena no existe en la cadena.\n";

    return 0;
}