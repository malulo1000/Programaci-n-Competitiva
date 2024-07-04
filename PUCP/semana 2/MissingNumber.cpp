#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long n, aux;
    cin >> n;
    vector<long> x(n, 1);

    for (long i = 0; i < n - 1; i++)
    {
        cin >> aux;
        x[aux - 1] = 2;
    }

    auto it = find(x.begin(), x.end(), 1);
    int index = distance(x.begin(), it);

    cout << index + 1 << "\n";

    return 0;
}