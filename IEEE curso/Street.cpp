#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, a, b;
    cin >> t;
    while (t--)
    {
        int i = 0;
        cin >> a >> b;
        if (a < b)
        {
            if (b - a == 1)
                cout << "1\n";
            else if (a % 2 == b % 2)
            {
                while (a < b)
                {
                    i++;
                    a += 2;
                }
                cout << i << "\n";
            }
            else
            {
                if (a % 2 == 0)
                {
                    a++;
                    i++;
                    while (a < b)
                    {
                        i++;
                        a += 2;
                    }
                }
                else
                {
                    a += 3;
                    i++;
                    while (a < b)
                    {
                        i++;
                        a += 2;
                    }
                }
                cout << i << "\n";
            }
        }
        else if (a == b)
            cout << "0\n";
        else
        {
            if (a - b == 1)
                cout << "1\n";
            else if (a % 2 == b % 2)
            {
                while (b < a)
                {
                    i++;
                    b += 2;
                }
                cout << i << "\n";
            }
            else
            {
                if (b % 2 == 0)
                {
                    b++;
                    i++;
                    while (b < a)
                    {
                        i++;
                        b += 2;
                    }
                }
                else
                {
                    b += 3;
                    i++;
                    while (b < a)
                    {
                        i++;
                        b += 2;
                    }
                }
                cout << i << "\n";
            }
        }
    }
    return 0;
}