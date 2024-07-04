#include <bits/stdc++.h>
using namespace std;

void printLexicographic(int curr, int n, vector<bool> &y)
{
    if (curr > n)
        return;

    if (!y[curr])
    {
        cout << curr << "\n";
        y[curr] = true;
        for (int i = 0; i <= 9; i++)
        {
            if (10 * curr + i <= n)
            {
                printLexicographic(10 * curr + i, n, y);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    vector<bool> y(N);

    for (int i = 1; i <= min(N, 9); i++)
    {
        printLexicographic(i, N, y);
    }
    return 0;
}
