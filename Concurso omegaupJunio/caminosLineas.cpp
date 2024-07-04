#include <iostream>
using namespace std;

unsigned long long c(int n, int k)
{
    if (k > n - k)
    {
        k = n - k;
    }
    unsigned long long r = 1;
    for (auto i = 0; i < k; ++i)
    {
        r *= (n - i);
        r /= (i + 1);
    }
    return r;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int H, W;
    cin >> H >> W;

    cout << c(H + W, W) << "\n";

    return 0;
}
