#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

ll tribo(ll);

unordered_map<ll, ll> cache;

int main()
{
    ll n;
    while (cin >> n && n != 0)
    {
        cout << tribo(n) << "\n";
    }
    return 0;
}

ll tribo(ll n)
{
    if (cache.count(n))
    {
        return cache[n];
    }

    ll x;

    if (n <= 2)
    {
        x = (n == 0) ? 0 : 1;
    }
    else
    {
        x = tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
    }

    cache[n] = x;
    return x;
}
