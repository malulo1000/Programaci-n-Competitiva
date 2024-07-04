#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    if (n % 2 == 0 && n >= 4)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}