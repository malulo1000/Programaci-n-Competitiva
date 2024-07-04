#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int x, c = 0;
    cin >> x;

    while (x < 0)
    {
        x /= 10;
        c++;
    }
    if (c == 7 || c == 4)
        cout << "YES\n";
    else
        cout << "NO\n"<<c;
    return 0;
}