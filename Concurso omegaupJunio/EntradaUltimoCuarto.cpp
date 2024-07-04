#include <iostream>
using namespace std;

unsigned long long binomial_coefficient(int n, int k)
{
    if (k > n - k)
    {
        k = n - k;
    }
    unsigned long long result = 1;
    for (int i = 0; i < k; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

unsigned long long multinomial(int H, int W, int D)
{
    return binomial_coefficient(H + W + D, H) * binomial_coefficient(W + D, W);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int H, W, D;
    cin >> H >> W >> D;

    cout << multinomial(H, W, D) << "\n";

    return 0;
}
