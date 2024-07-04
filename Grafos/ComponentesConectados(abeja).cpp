#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<char, vector<char>> graph;
map<char, bool> visited;

void dfs(char node)
{
    visited[node] = true;
    cout << node << ",";
    for (char neighbor : graph[node])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    for (int caseNum = 1; caseNum <= N; caseNum++)
    {
        graph.clear();
        visited.clear();

        int V, E;
        cin >> V >> E;

        for (int i = 0; i < E; i++)
        {
            char u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        cout << "Case #" << caseNum << ":\n";

        int connectedComponents = 0;

        for (char vertex = 'a'; vertex < 'a' + V; vertex++)
        {
            if (!visited[vertex])
            {
                dfs(vertex);
                cout << "\n";
                connectedComponents++;
            }
        }

        cout << connectedComponents << " connected components\n";
    }

    return 0;
}
