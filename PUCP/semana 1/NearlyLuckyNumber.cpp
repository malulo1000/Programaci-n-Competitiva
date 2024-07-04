#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long x, c = 0;
    cin >> x;

    while (x)
    {
        if (x % 10 == 4 || x % 10 == 7)
            c++;
        x /= 10;
    }

    if (c == 7 || c == 4)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}