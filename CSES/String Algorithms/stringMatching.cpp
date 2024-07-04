#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string x, y;

    cin >> x;
    cin >> y;

    ll n = x.length(), c = 0, ys = y.length();

    for (ll i = 0; i < n - ys + 1; i++)
    {
        string z = x.substr(i, ys);
        if (z == y)
        {
            c++;
        }
    }
    cout << c << "\n";

    return 0;
}