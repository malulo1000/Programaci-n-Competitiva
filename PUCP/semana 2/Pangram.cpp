#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int trash;
    cin >> trash;
    if (trash >= 26)
    {
        vector<int> a(26, 0);
        string x;
        cin >> x;

        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] >= 97)
                a[x[i] - '\0' - 97] = 1;
            else
                a[x[i] - '\0' - 65] = 1;
        }

        auto k = find(a.begin(), a.end(), 0);
        if (k != a.end())
        {
            int rpt = distance(a.begin(), k);
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
    else
        cout << "NO\n";
    return 0;
}