#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, a, b, x;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a % 2 == 0)
        {
            if (b % 2 == 0)
                x = a + ((b - a) / 2);
            else
                x = -((b - 1) - a) / 2 - 1;
        }
        else
        {
            if (b % 2 == 0)
                x = ((b - (a + 1)) / 2) + 1;
            else
                x = -a - ((((b - 1) - (a + 1)) / 2) + 1);
        }
        cout << x << "\n";
    }

    return 0;
}