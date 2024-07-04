#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
            cout << n + 2 << "\n";
        else
            cout << n + 1 << "\n";
    }

    return 0;
}