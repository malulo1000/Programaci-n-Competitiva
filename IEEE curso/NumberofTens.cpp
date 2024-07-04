#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n < 9)
        cout << 0 << "\n";
    else
        cout << (n / 10) % 10 << "\n";
    return 0;
}