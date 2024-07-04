#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int po = 0, ne = 0;
    for (int i = 0; i < n; ++i)
    {
        int aux;
        cin >> aux;
        (aux != -1) ? ++po : ++ne;
    }

    while (m--)
    {
        int ini, fin;
        cin >> ini >> fin;

        int aux = (fin - ini + 1) / 2;
        if (((ini - fin) & 1) && po >= aux && ne >= aux)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}
