#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;

    cin >> a;
    long long sum = 0;

    if (a[0] == '-' || stoll(a) > 99999)
    {
        cout << "0\n";
        return 0;
    }
    else
    {
        for (auto i = 0; i < a.size(); i++)
        {
            sum += a[i] - '0';
        }
    }
    cout << sum << "\n";
    return 0;
}
