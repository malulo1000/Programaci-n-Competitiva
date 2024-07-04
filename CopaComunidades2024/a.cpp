#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    while (cin >> n)
    {
        long long max = 0, min = 0, sal = 0;
        for (auto i : n)
        {
            if (i == '+')
            {
                sal++;
                if (sal > max)
                {
                    max = sal;
                }
            }
            else
            {
                sal--;
                if (sal < min)
                {
                    min = sal;
                }
            }
        }

        if (max > (min * -1))
        {
            cout << max << "\n";
        }
        else
        {
            cout << min * -1 << "\n";
        }
    }

    return 0;
}
