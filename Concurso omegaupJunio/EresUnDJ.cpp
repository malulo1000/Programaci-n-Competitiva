#include <bits/stdc++.h>

using namespace std;

string tolower(const string &s)
{
    string r = s;
    transform(r.begin(), r.end(), r.begin(),
              [](unsigned char c)
              { return tolower(c); });
    return r;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    cin.ignore();

    vector<pair<string, string>> x;

    for (long long i = 0; i < n; i++)
    {
        string t;
        getline(cin, t);
        x.push_back(make_pair(t, tolower(t)));
    }

    sort(x.begin(), x.end(), [](const pair<string, string> &a, const pair<string, string> &b)
         { return a.second < b.second; });

    for (const auto &i : x)
    {
        cout << i.first << "\n";
    }

    return 0;
}
