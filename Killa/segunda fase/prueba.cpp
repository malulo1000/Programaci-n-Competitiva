#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k, s;
    cin >> k >> s;
    long long ans = 0;
    for (int a = 0; a <= k; a++)
    {
        for (int b = 0; b <= s - a; b++)
        {
            int c = s - a - b;
            if (c < 0 || c > k || b > k)
                continue;
            if (a == 0 || b == 0 || c == 0)
            {

                ans++;
                continue;
            }
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}