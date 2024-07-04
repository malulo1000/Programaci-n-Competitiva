#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

struct S
{
    ll o;
    ll c;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m;
    ll t = 0;
    cin >> n >> m;

    vector<S> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i].o >> s[i].c;
        t += s[i].o;
    }

    sort(s.begin(), s.end(), [](const S &a, const S &b)
         { return a.o - a.c < b.o - b.c; });

    if (t <= m)
    {
        cout << "0\n";
        return 0;
    }

    ll cnt = 0;

    for (ll i = 0; i < n; ++i)
    {
        t -= s[i].o - s[i].c;
        if (t <= m)
        {
            cout << i++ << "\n";
            return 0;
        }
    }

    cout << "-1\n";
    return 0;
}
