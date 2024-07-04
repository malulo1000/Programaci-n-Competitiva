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
        if (0 < n)
            cout << "1\n";
        else if (n < 0)
            cout << "-1\n";
        else
            cout << "0\n";
    }
    return 0;
}