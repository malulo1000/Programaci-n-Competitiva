#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string x;
    cin >> x;
    sort(x.begin(), x.end());
    reverse(x.begin(), x.end());

    cout << x << "\n";

    return 0;
}