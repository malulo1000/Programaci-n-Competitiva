#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int longestIncreasingSequenceLength(int n, vector<int> &array)
{
    vector<int> lis;
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(lis.begin(), lis.end(), array[i]);
        if (it == lis.end())
            lis.push_back(array[i]);
        else
            *it = array[i];
    }
    return lis.size();
}

int main()
{
    ios::sync_with_stdio();
    cin.tie();
    cout.tie();
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++)
        cin >> array[i];

    int result = longestIncreasingSequenceLength(n, array);
    cout << result << "\n";

    return 0;
}
