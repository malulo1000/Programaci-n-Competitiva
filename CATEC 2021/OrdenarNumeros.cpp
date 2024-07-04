#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> a;
    int n;
    cin >> n;

    a.resize(n);
    for (auto i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (auto b : a)
    {
        cout << b << "\n";
    }

    return 0;
}