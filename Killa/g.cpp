#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool s(vector<int> &nums, int p, int totalActual)
{
    if (p == nums.size())
    {
        return totalActual == 23;
    }

    int num = nums[p];

    return s(nums, p + 1, totalActual + num) ||
           s(nums, p + 1, totalActual - num) ||
           s(nums, p + 1, totalActual * num);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> nums(5);

    for (int i = 0; i < 5; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    do
    {
        if (s(nums, 1, nums[0]))
        {
            cout << "Posible\n";
            return 0;
        }
    } while (next_permutation(nums.begin(), nums.end()));

    cout << "Imposible\n";
    return 0;
}
