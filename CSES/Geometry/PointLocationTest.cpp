#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int main()
{
    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        ll x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        ll x = 0;
        ll y = (y2 - y1) - (y2 - y3) - (y3 - y1);

        x = (x2 - x1) - (x2 - x3) - (x3 - x1);

        cout
            << "\n"
            << x << "\n"
            << y;

        if (x == 0 && y == 0)
        {
            cout << "TOUCH\n";
        }
        else if (y3 > x3)
        {
            cout << "LEFT\n";
        }
        else
        {
            cout << "RIGHT\n";
        }
    }
    return 0;
}