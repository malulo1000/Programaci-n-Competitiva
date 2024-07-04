#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, a, b, l, n;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> l >> n;
        cout << (l * 2) + (b * 2 * (n - 1)) + a + (a * 2 * (n - 1)) << "\n";
    }

    return 0;
}