#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    vector<long long> e(n);
    for (auto &el : e)
        cin >> el;

    long long bx = 0, bo = 0;

    for (auto i = 0; i < n; i++)
        for (auto j = i; j < n; j++)
        {
            bx ^= (e[i] + e[j]);
            bo |= (e[i] + e[j]);
        }

    cout << bx << " " << bo << "\n";
    return 0;
}
