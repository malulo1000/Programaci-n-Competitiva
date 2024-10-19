#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("subsonic_subway_input.txt", "r", stdin);
    freopen("subsonic_subway_output.txt", "w", stdout);

    int p;
    cin >> p;

    for (int i = 1; i <= p; ++i)
    {
        int N;
        cin >> N;

        double mins = 0.0;
        double maxs = 1e9;
        for (int j = 1; j <= N; ++j)
        {
            int Ai, Bi;
            cin >> Ai >> Bi;

            maxs = min(maxs, (double)j / Ai);
            mins = max(mins, (double)j / Bi);
        }

        if (mins > maxs)
        {
            cout << "Case #" << i << ": -1\n";
        }
        else
        {
            cout << "Case #" << i << ": " << mins << "\n";
        }
    }

    return 0;
}
