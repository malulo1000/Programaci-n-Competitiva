#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> eventos;

    for (int i = 0; i < n; i++)
    {
        int inicio, fin;
        cin >> inicio >> fin;
        eventos.push_back({inicio, fin});
    }

    sort(eventos.begin(), eventos.end(), [](auto &a, auto &b)
         { return a.second < b.second; });

    int maxEventos = 0, ultimoFin = -1;
    for (auto &evento : eventos)
        if (evento.first >= ultimoFin)
            maxEventos++, ultimoFin = evento.second;
    cout << maxEventos << "\n";
    return 0;
}
