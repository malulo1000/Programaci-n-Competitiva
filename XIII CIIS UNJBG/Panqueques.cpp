#include <iostream>
#include <string>
using namespace std;

int flipPancakes(const string &pancakes)
{
    int flips = 0;
    char current = pancakes[0];

    for (char c : pancakes)
        if (c != current)
        {
            flips++;
            current = c;
        }

    if (current == '-')
        flips++;

    return flips;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int numTestCases;
    cin >> numTestCases;
    cin.ignore();

    for (auto i = 1; i <= numTestCases; i++)
    {
        string pancakes;
        getline(cin, pancakes);
        int flips = flipPancakes(pancakes);
        cout << "Case #" << i << ": " << flips << "\n";
    }

    return 0;
}
