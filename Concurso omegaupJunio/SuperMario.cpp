#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>
#include <sstream>

using namespace std;

void bfs(int start, const vector<unordered_set<int>> &conexiones, vector<bool> &visitado, vector<int> &conexiones_desde)
{
    queue<int> q;
    q.push(start);
    visitado[start] = true;

    while (!q.empty())
    {
        int actual = q.front();
        q.pop();
        for (int vecino : conexiones[actual])
        {
            if (!visitado[vecino])
            {
                visitado[vecino] = true;
                q.push(vecino);
                conexiones_desde[vecino] = start;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<unordered_set<int>> conexiones(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        string ln;
        getline(cin, ln);
        stringstream ss(ln);
        int w;
        while (ss >> w)
        {
            conexiones[i].insert(w);
            conexiones[w].insert(i);
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        vector<bool> visitado(n + 1, false);
        vector<int> conexiones_desde(n + 1, -1);
        bfs(i, conexiones, visitado, conexiones_desde);

        bool primero = true;
        for (int j = 1; j <= n; ++j)
        {
            if (conexiones_desde[j] == i)
            {
                if (!primero)
                    cout << " ";
                cout << j;
                primero = false;
            }
        }
        cout << endl;
    }

    return 0;
}
