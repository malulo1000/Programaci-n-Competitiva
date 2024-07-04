#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;

    map<int, int> cu;
    for (int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        cu[t]++;
    }

    vector<pair<int, int>> cu2(cu.begin(), cu.end());

    sort(cu2.begin(), cu2.end(), [](const auto &a, const auto &b)
         { return a.second > b.second; });

    double x = static_cast<double>(cu2[0].second) / k;
    int y = static_cast<int>(ceil(x));

    cout << (cu2.size() * k * y) - n << "\n";
    return 0;
}
