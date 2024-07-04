#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, n, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n;
        cout << (a * n) + ((b * n) / 100) << " ";
        cout << (b * n) % 100 << "\n";
    }

    return 0;
}