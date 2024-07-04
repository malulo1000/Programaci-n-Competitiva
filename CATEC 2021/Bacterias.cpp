#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int bioHazard(int n, const vector<int> &allergic, const vector<int> &poisonous)
{
    unordered_map<int, int> d;
    for (int i = 0; i < n; i++)
    {
        int a = min(allergic[i], poisonous[i]);
        int b = max(allergic[i], poisonous[i]);
        d[b] = max(d[b], a);
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] = max(d[i], d[i - 1]);
    }

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (d[i] == -1)
        {
            res += i;
        }
        else
        {
            res += i - d[i];
        }
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> allergic(n);
    vector<int> poisonous(n);

    cout << "Enter the values of allergic: ";
    for (int i = 0; i < n; i++)
    {
        cin >> allergic[i];
    }

    cout << "Enter the values of poisonous: ";
    for (int i = 0; i < n; i++)
    {
        cin >> poisonous[i];
    }

    int result = bioHazard(n, allergic, poisonous);
    cout << "Result: " << result << endl;

    return 0;
}
