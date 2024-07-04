#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n % k == 0)
            cout << 0 << "\n";
        else
            cout << k - (n % k) << "\n";
    }

    return 0;
}