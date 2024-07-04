#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, s, k, p;
    cin >> t;
    while (t--)
    {
        cin >> k >> p >> s;
        double x = k * (1 + (p / 100.0));
        cout << floor(s / x) << "\n";
    }
    return 0;
}