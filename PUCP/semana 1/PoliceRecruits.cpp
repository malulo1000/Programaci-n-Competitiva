#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long n;
    cin >> n;

    int c = 0, x = 0, p;
    for (long i = 0; i < n; i++)
    {
        cin >> p;

        if (p > 0)
            c += p;
        else
        {
            if (c > 0)
                c--;
            else
                x++;
        }
    }

    cout << x << "\n";
    return 0;
}