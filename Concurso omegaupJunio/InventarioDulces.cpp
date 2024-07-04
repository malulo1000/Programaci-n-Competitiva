#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;

    unordered_map<char, int> x;

    cin >> n;

    for (auto c : n)
    {
        x[c]++;
    }

    cout << "t=" << x['t'] << "\n";
    cout << "a=" << x['a'] << "\n";
    cout << "c=" << x['c'] << "\n";
    cout << "o=" << x['o'] << "\n";
    return 0;
}
