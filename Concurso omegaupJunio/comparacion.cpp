#include <bits/stdc++.h>

using namespace std;

void comp(long long a, long long b)
{
    if (a > b)
        cout << "mayor\n";
    else if (a == b)
        cout << "iguales\n";
    else
        cout << "menor\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b;

    cin >> a >> b;

    comp(a, b);
}