#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, a, b, c, d;

    cin >> x;

    do
    {
        x++;
        a = x / 1000;
        b = (x - (a * 1000)) / 100;
        c = (x - (a * 1000 + b * 100)) / 10;
        d = (x - (a * 1000 + b * 100 + c * 10));

    } while (a == b || a == c || a == d || b == c || b == d || c == d);

    cout << x << "\n";

    return 0;
}